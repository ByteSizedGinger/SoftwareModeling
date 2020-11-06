#include "Season/Race.h"
#include "Car/Car.h"
#include <cstdlib>
#include <iostream>

using namespace std;

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
            cars[j]->incrementRaceTime(time);
        }
    }
    cout << "<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
    cout << "Race results:" << endl;
    printLeaderBoard();
}

void Race::printLeaderBoard() {
    cout << "<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
    sortDrivers();
    for (int i = 0; i < numCars; i++) {
        cout << i << ":" << cars[i]->getDriverName() << endl;
    }
    cout << "<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
}

void Race::runQualifying() {
    cout << "Starting Qualifying: " << name;
    for (int i = 0; i < numCars; i++) {
        cars[i]->setRaceTime(0);
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < numCars; ++j) {
            int time = rand() % 20 + averageLapTime;
            cars[j]->incrementRaceTime(time);
        }
    }
    cout << "<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
    cout << "Qualifying results: " << endl;
    printLeaderBoard();
}

void Race::runFreePractice1() {
    cout << "Starting free Practice 1: " << name;
    cout << "<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
    for (int i = 0; i < numCars; i++) {
        cars[i]->setRaceTime(0);
    }

    for (int j = 0; j < numCars; ++j) {
        int time = rand() % 80 + averageLapTime;
        cars[j]->incrementRaceTime(time);
    }

    cout << "Free practice 1 results: " << endl;
    printLeaderBoard();
}

void Race::pitStop() {
    for (int j = 0; j < numCars; ++j) {
        int time = rand() % 20 + 25;
        cars[j]->incrementRaceTime(time);
        cout << cars[j]->getDriverName() << " had a pit stop time of " << time << endl;
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
    cout << "<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
    for (int i = 0; i < numCars; i++) {
        cars[i]->setRaceTime(0);
    }

    for (int j = 0; j < numCars; ++j) {

        int time = rand() % 60 + averageLapTime;
        cars[j]->incrementRaceTime(time);
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
    allocatePoints();
    cout << "Race weekend for race:" << name << " has ended" << endl;

}


void Race::sortDrivers() {
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

void Race::allocatePoints() {
    sortDrivers();
    cars[0]->addPoints(25);
    cars[1]->addPoints(18);
    cars[2]->addPoints(15);
    cars[3]->addPoints(12);
    cars[4]->addPoints(10);
    cars[5]->addPoints(8);
    cars[6]->addPoints(6);
    cars[7]->addPoints(4);
    cars[8]->addPoints(2);
    cars[9]->addPoints(1);

}


