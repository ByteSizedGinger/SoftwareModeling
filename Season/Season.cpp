#include "Season/Season.h"

Season::Season() {}

Season::~Season() {
	for (int i = 0; i < 10, i++) {
		delete teams[i];
	}
	delete[] teams;
	for (int i = 0; i < 21, i++) {
		delete races[i];
	}
	delete[] races;
}

Season Season::instance() {
	if (singleton == NULL) {
		singleton = new Season();
	}
	return *(singleton);
}

void Season::addTeam() {
	Team** newList = new Team*[numTeams+1];
	for (int i = 0; i < numTeams; i++) {
		newList[i] = teams[i];
	}
	newList[numTeams] = new Team(teamName, driver1, driver2);
	delete[] teams;
	teams = newList;
	numTeams++;
}

void Season::addRace(Race* race) {
	Race** newList = new Race*[numRaces+1];
	for (int i = 0; i < numRaces; i++) {
		newList[i] = races[i];
	}
	newList[numRaces] = race;
	delete[] races;
	races = newList;
	numRaces++;
}

void Season::runSeason() {
	int upgradesBlockedUntil = 0; //cannot do upgrades if we are before this date
	for (int date = 1; date <= 365; date++) {
		RaceIterator* it = createIterator();
		for (it->first(); !it->isDone(); it->next()) {
			Race* race = it->currentItem();

			if (!race->isEuropean() && race->getDate()-90 == date) {
				transport(false);
			} else if (race->isEuropean() && race->getDate()-7 == date) {
				transport(true);
			}
			
			if (race->getDate()-30 == date) {
				orderTyres();
			}

			if (race->getDate() == date) {
				race->runRaceWeekend(getCars(), numTeams*2);
				upgradesBlockedUntil = date+2;
				//cannot do upgrades today (date+0), tomorrow (date+1) or the next day (date+2).
				//can do upgrades the following day (date+3)
			}
		}
		delete it;

		if (upgradesBlockedUntil < date) {
			upgradeTeamCars();
		}
	}
}

void Season::displayConstructorsStandings() {
	cout << "Constructors' Standings:" << endl;
	for (int i = 0; i < numTeams; i++) {
		cout << (i+1) << ". " << teams[i]->getName() << ": " << teams[i]->getConstructorPoints() << endl;
	}
}

void Season::orderTyres() {
	for (int i = 0; i < numTeams; i++) {
		teams[i]->orderTyres();
	}
}

Car** Season::getCars() {
	Car** cars = new Car*[20];
	for (int i = 0; i < 10; i++) {
		cars[i*2] = teams[i]->getCurrentSeasonCars()[0];
		cars[i*2+1] = teams[i]->getCurrentSeasonCars()[1];
	}
	return cars;
}

void Season::transport(bool european) {
	for (int i = 0; i < numTeams; i++) {
		if (european) {
			teams[i]->setEuropeanStrategy();
		} else {
			teams[i]->setNonEuropeanStrategy();
		}
		teams[i]->transport();
	}
}

void displayDriversStandings() {
	Car** cars = getCars();
	cout << "Drivers' Standings:" << endl;
	for (int i = 0; i < numTeams*2; i++) {
		cout << (i+1) << ". " << cars[i]->getDriver()->getName() << ": " << cars[i]->getPoints() << endl;
	}
}

RaceIterator* createIterator() {
	return new RaceIterator(races, numRaces);
}

void Season::upgradeTeamCars() {
	for (int i = 0; i < numTeams; i++) {
		teams[i]->upgrade();
	}
}