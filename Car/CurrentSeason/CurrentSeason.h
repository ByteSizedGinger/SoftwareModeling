#ifndef CURRENTSEASON_H
#define CURRENTSEASON_H

#include "Car/CurrentSeason/Tyre/Tyre.h"
#include "Car/CurrentSeason/Driver.h"

using namespace std;

class CurrentSeason: public Car {
	private:
    int raceTime;
    Queue<Tyre *> tyres;
    Driver *driver;
public:
    CurrentSeason();

    void addPoints(int p);

    void simulate();

    int getPoints();

    int calculateSpeed();

    CurrentSeason *clone();

    string getDriverName();

    void addRaceTime();

    void clearRaceTime();
};

#endif