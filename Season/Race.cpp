#include "Season/Race.h"
#include "Car/Car.h"
#include <cstdlib>

Race::Race(int l, bool euro, int d, string n, int avgL) {
    european = euro;
    laps = l;
    date = d;
    name = n;
    numCars = 0;
    averageLapTime = avgL;
}

void Race::runRace() {
    for (int i = 0; i < numCars; i++) {
        cars[i]->setRaceTime(0);
    }
    cout << "Starting race: " << name;
    for (int i = 0; i < laps; i++) {
        for (int j = 0; j < numCars; ++j) {
            int time = rand() % 50 + averageLapTime;
            cars[j]->addRaceTime();
        }
    }
    cout << "<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>" << end;
    cout << "Race results:" << endl;
    printLeaderBoard();
}

void Race::printLeaderBoard() {
    cout << "<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>" << end;
    sortDrivers();
    for (int i = 0; i < numCars; i++) {
        cout << i << ":" << cars[i]->getDriverName() << endl;
    }
    out << "<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>" << end;
}

void Race::runQualifying() {
    cout << "Starting Qualifying: " << name;
    for (int i = 0; i < numCars; i++) {
        cars[i]->setRaceTime(0);
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < numCars; ++j) {
            int time = rand() % 20 + averageLapTime;
            cars[j]->addRaceTime();
        }
    }
    cout << "<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>" << end;
    cout << "Qualifying results: " << endl;
    printLeaderBoard();
}

void Race::runFreePractice1() {
    cout << "Starting free Practice 1: " << name;
    cout << "<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>" << end;
    for (int i = 0; i < numCars; i++) {
        cars[i]->setRaceTime(0);
    }

    for (int j = 0; j < numCars; ++j) {
        int time = rand() % 80 + averageLapTime;
        cars[j]->addRaceTime();
    }

    cout << "Free practice 1 results: " << endl;
    printLeaderBoard();
}

void Race::pitStop() {
    for (int j = 0; j < numCars; ++j) {
        int time = rand() % 20 + 25;
        cars[j]->addRaceTime();
    }
}

int Race::getDate() {
    return date;
}

bool Race::isEuropean() {
    return european;
}


void Race::runFreePractice2() {
    cout << "Starting free Practice 2: " << name;
    cout << "<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>" << end;
    for (int i = 0; i < numCars; i++) {
        cars[i]->setRaceTime(0);
    }

    for (int j = 0; j < numCars; ++j) {

        int time = rand() % 60 + averageLapTime;
        cars[j]->addRaceTime();
    }

    cout << "Free practice 2 results: " << endl;
    printLeaderBoard();
}

void Race::runRaceWeekend(Car **c, int num) {
    numCars = num;
    cars = c;

    for (int i = 0; i < numCars; i++) {
        cars[i]->setRaceTime(0);
    }
    cout << "Race weekend for race:" << name << " is starting" << endl;
    runFreePractice1();
    runFreePractice2();
    runQualifying();
    runRace();
    cout << "Race weekend for race:" << name << " has ended" << endl;

}


void sortDrivers() {
    for (int i = 0; i < numCars; i++) {
        for (int j = i; j < numCars; j++) {
            if (cars[i]->getRaceTime() > cars[j]->getRaceTime()) {
                Car *temp = cars[i];
                cars[i] = cars[j];
                cars[j] = temp;
            }
        }
    }
}


