#include "Season/Season.h"

Season::Season() {
	
}

Season::~Season() {
	
}

Season* Season::instance() {
	return singleton;
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