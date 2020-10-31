#ifndef RACE_H
#define RACE_H

#include <string>
#include "Car/Car.h"

using namespace std;

class Race {

private:
    int laps;
    bool european;
    int date;
    string name;
    Car **cars;
    int numCars;
    int averageLapTime;

public:
    Race(int l, bool euro, int d, string n, int avgL);

    void setCars(Car **c, int num);

    void runRace();

    void printLeaderBoard();

    void runQualifying();

    void runFreePractice1();

    void pitStop();

	int getDate();

	bool isEuropean();

	void runFreePractice2();

	void runRaceWeekend(Car** c);
};

#endif
