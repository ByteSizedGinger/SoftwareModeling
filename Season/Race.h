#ifndef RACE_H
#define RACE_H

#include <string>
#include "Car/Car.h"

using namespace std;

class Race {

private:
    int laps;
    bool european;
    int date;  //date of 1st day of weekend
    string name;
    Car **cars;
    int numCars;
    int averageLapTime;

    void runFreePractice2();

    void runQualifying();

    void runFreePractice1();

    void pitStop();

    void runRace();

    void sortDrivers();

    void allocatePoints();

public:
    Race(int l, bool euro, int d, string n, int avgL);

    void printLeaderBoard();

    int getDate();

    bool isEuropean();

    void runRaceWeekend(Car **c, int num);
};

#endif
