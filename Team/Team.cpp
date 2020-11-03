#include "Team.h"

Team::Team(int string_name, string driver1Name, string driver2Name) {
    name = string_name;
    currentCars[0] = new Aerodynamics();
    currentCars[0]->addPart(new Electronics());
    currentCars[0]->addPart(new Engine());
    currentCars[0]->addPart(new Chassis());
    currentCars[0]->addPart(new CurrentSeason());
    currentCars[1] = currentCars[0]->clone();
    //currentCars[1] = new CurrentSeason(driver2Name);
    nextSeasonCar = new Aerodynamics();

}

void Team::transport() {
    transportStrategy->transport(container);
}

void Team::orderTyres() {

}

Car **Team::getCurrentSeasonCars() {
    return currentCars;
}

void Team::setEuropeanStrategy() {
    if (transportStrategy != null) {
        delete transportStrategy;
    }

    transportStrategy = new Truck();
}

void Team::setNonEuropeanStrategy() {
    if (transportStrategy != null) {
        delete transportStrategy;
    }

    transportStrategy = new Ship();
}

string Team::getName() {
    return name;
}

void Team::upgrade() {
    cout << "Upgrading car" << endl;
    int u = rand() % 4 + 1;
    if (u == 1) {
        departments[0]->createPart();
    } else if (u == 2) {
        departments[1]->createPart();
    } else if (u == 3) {
        departments[2]->createPart();
    } else {
        departments[3]->createPart();
    }


}

int Team::getConstructorPoints() {
    return constructorPoints;
}

void Team::updatePoints() {
    constructorPoints = currentCars[0]->getPoints() + currentCars[1]->getPoints();
}

Team::~Team() {
    if (transportStrategy != null) {
        delete transportStrategy;
    }

    for (int i = 0; i < 4; i++) {
        if (departments[i] != null) {
            delete departments[i];
        }
    }
    delete departments;

    if (mediator != null) {
        delete mediator;
    }
    if (nextSeasonCar != null) {
        delete nextSeasonCar;
    }

    for (int i = 0; i < 2; i++) {
        if (currentCars[i] != null) {
            delete currentCars[i];
        }
    }

    if (container != null) {
        delete container;
    }

}



