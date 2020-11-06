#include "Team.h"
#include "Car/Parts/Aerodynamics.h"
#include "Car/Parts/Electronics.h"
#include "Car/Parts/Engine.h"
#include "Car/Parts/Chassis.h"
#include "Team/Department/AerodynamicsFactory.h"
#include "Team/Department/ChassisFactory.h"
#include "Team/Department/ElectronicsFactory.h"
#include "Team/Department/EngineFactory.h"
#include "Team/Transport/Container/Box.h"
#include "Team/Transport/Container/Equipment.h"
#include "Team/Transport/Strategy/Ship.h"
#include "Team/Transport/Strategy/Truck.h"
#include <iostream>

using namespace std;

Team::Team(string string_name, string driver1Name, string driver2Name) {
    cout << string_name << " has entered the season with drivers " << driver1Name << " and " << driver2Name
         << " on their team" << endl;
    name = string_name;
    currentCars = new Car *[2];

    currentCars[0] = new Aerodynamics();
    currentCars[0]->addPart(new Electronics());
    currentCars[0]->addPart(new Engine());
    currentCars[0]->addPart(new Chassis());
    currentCars[0]->addPart(new CurrentSeason(driver1Name));

    currentCars[1] = currentCars[0]->clone();
    currentCars[1]->setDriver(new Driver(driver2Name));

    nextSeasonCar = new Aerodynamics();
    nextSeasonCar->addPart(new Electronics());
    nextSeasonCar->addPart(new Engine());
    nextSeasonCar->addPart(new Chassis());
    nextSeasonCar->addPart(new NextSeason());

    constructorPoints = 0;
    mediator = new DepartmentMediator(this);
    container = nullptr;
    transportStrategy = nullptr;

    departments = new DepartmentFactory *[4];
    departments[0] = new AerodynamicsFactory(mediator);
    departments[1] = new ChassisFactory(mediator);
    departments[2] = new EngineFactory(mediator);
    departments[3] = new ElectronicsFactory(mediator);


}

void Team::transport() {

    transportStrategy->transport(container);
}

void Team::orderTyres() {
    cout << name << " is ordering tyres" << endl;
}

Car **Team::getCurrentSeasonCars() {
    return currentCars;
}

void Team::setEuropeanStrategy() {
    if (transportStrategy) {
        delete transportStrategy;
    }
    if (container) {
        delete container;
    }
    Box *box = new Box();
    box->add(new Equipment("Garage Equipment"));
    box->add(new Equipment("Catering Equipment"));
    box->add(new Equipment("Other Equipment"));
    container = box;
    transportStrategy = new Truck();
}

void Team::setNonEuropeanStrategy() {
    if (transportStrategy) {
        delete transportStrategy;
    }
    if (container) {
        delete container;
    }
    Box *box = new Box();
    box->add(new Equipment("Garage Equipment"));
    box->add(new Equipment("Catering Equipment"));
    box->add(new Equipment("Extra Tools"));
    box->add(new Equipment("Other Equipment"));
    container = box;
    transportStrategy = new Ship();
}

string Team::getName() {
    return name;
}

void Team::upgrade() {
    cout << "Upgrading car" << endl;
    int u = rand() % 4 + 1;
    if (u == 1) {

        departments[0]->createPart(dynamic_cast<DepartmentOutput *>(currentCars[0]));
    } else if (u == 2) {
        departments[1]->createPart(dynamic_cast<DepartmentOutput *>(currentCars[0]));
    } else if (u == 3) {
        departments[2]->createPart(dynamic_cast<DepartmentOutput *>(currentCars[0]));
    } else {
        departments[3]->createPart(dynamic_cast<DepartmentOutput *>(currentCars[0]));
    }


}

int Team::getConstructorPoints() {
    return constructorPoints;
}

void Team::updatePoints() {
    constructorPoints = currentCars[0]->getPoints() + currentCars[1]->getPoints();
}

Team::~Team() {
    if (transportStrategy) {
        delete transportStrategy;
    }

    for (int i = 0; i < 4; i++) {
        if (departments[i]) {
            delete departments[i];
        }
    }
    delete departments;

    if (mediator) {
        delete mediator;
    }
    if (nextSeasonCar) {
        delete nextSeasonCar;
    }

    for (int i = 0; i < 2; i++) {
        if (currentCars[i]) {
            delete currentCars[i];
        }
    }

    if (container) {
        delete container;
    }

}

void Team::partChanged(DepartmentOutput *part) {

    currentCars[0]->removePart(part->getType());
    currentCars[1]->removePart(part->getType());
    DepartmentOutput *part2 = dynamic_cast<DepartmentOutput *>(part->clone());
    currentCars[0]->addPart(part);
    currentCars[1]->addPart(part2);

}



