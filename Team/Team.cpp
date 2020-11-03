#include "Team.h"

Team::Team(int string_name, string driver1Name, string driver2Name) {
    name = string_name;
    currentCars[0] = new Aerodynamics();
    currentCars[0]->addPart(new Electronics());
    currentCars[0]->addPart(new Engine());
    currentCars[0]->addPart(new Chassis());
    currentCars[0]->addPart(new CurrentSeason());
    //currentCars[1] = new CurrentSeason(driver2Name);
    nextSeasonCar =
}

void Team::transport() {
	// TODO - implement Team::transport
	throw "Not yet implemented";
}

void Team::orderTyres() {
	// TODO - implement Team::orderTyres
	throw "Not yet implemented";
}

CurrentSeason** Team::getCurrentSeasonCars() {
	// TODO - implement Team::getCurrentSeasonCars
	throw "Not yet implemented";
}

void Team::setEuropeanStrategy() {
	// TODO - implement Team::setEuropeanStrategy
	throw "Not yet implemented";
}

void Team::setNonEuropeanStrategy() {
    // TODO - implement Team::setNonEuropeanStrategy
    throw "Not yet implemented";
}

string Team::getName() {
    // TODO - implement Team::getName
    throw "Not yet implemented";
}

void Team::upgrade() {
    //Genrate random number 1-4 to determine which factory must create and test new part


}
