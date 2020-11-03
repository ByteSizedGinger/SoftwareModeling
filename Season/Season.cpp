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

void Season::addTeam(Team* team) {
	teams.push(team);
}

void Season::addRace(Race* race) {
	races.push(race);
}

void Season::runSeason() {
	for (int i = 0; i < 365; i++) {

	}
}

void Season::displayConstructorsStandings() {
	// TODO - implement Season::displayConstructorsStandings
	throw "Not yet implemented";
}

void Season::runRace() {
	// TODO - implement Season::runRace
	throw "Not yet implemented";
}

void Season::orderTyres() {
	// TODO - implement Season::orderTyres
	throw "Not yet implemented";
}

Car** Season::getCars() {
	Car** cars = new Car*[20];
	for (int i = 0; i < 10; i++) {
		cars[i*2] = teams[i]->getCurrentSeasonCars()[0];
		cars[i*2+1] = teams[i]->getCurrentSeasonCars()[1];
	}
	return cars;
}

void Season::transport() {
	// TODO - implement Season::transport
	throw "Not yet implemented";
}

void displayDriversStandings() {

}

RaceIterator* createIterator() {
	
}

void Season::upgradeTeamCars() {
    //Call various teams to upgrade cars
}