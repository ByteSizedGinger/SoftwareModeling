#include "Team.h"
#include "Car/CurrentSeason.h"
#include "Team/Transport/Container/Container.h"
#include "Team/Transport/Strategy/TransportStrategy.h"
#include "Team/Department/DepartmentFactory.h"
#include "Team/Department/DepartmentMediator.h"
#include "Team/TeamPoints.h"
#include "Car/NextSeason.h"

Team::Team(int string_name, string driver1Name, string driver2Name) {
    cout << "Team " << string_name << " created" << endl;
    name = string_name;
    currentCars[0] = new Aerodynamics();
    currentCars[0]->addPart(new Electronics());
    currentCars[0]->addPart(new Engine());
    currentCars[0]->addPart(new Chassis());
    currentCars[0]->addPart(new CurrentSeason());
    currentCars[1] = currentCars[0]->clone();
    //currentCars[1] = new CurrentSeason(driver2Name);
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
cout << name << " ordering tyres" << endl;
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
    container = new Box();
    container->add(new Equipment("Garage Equipment"));
    container->add(new Equipment("Catering Equipment"));
    container->add(new Equipment("Other Equipment"));
    transportStrategy = new Truck();
}

void Team::setNonEuropeanStrategy() {
    if (transportStrategy) {
        delete transportStrategy;
    }
    if (container) {
        delete container;
    }
    container = new Box();
    container->add(new Equipment("Garage Equipment"));
    container->add(new Equipment("Catering Equipment"));
    container->add(new Equipment("Extra Tools"));
    container->add(new Equipment("Other Equipment"));
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



