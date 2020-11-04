
#ifndef CURRENTSEASON_H
#define CURRENTSEASON_H

#include "Car/Car.h"
#include "Car/CurrentSeason/Tyre/Tyre.h"
#include "Car/CurrentSeason/Driver.h"
#include <queue>

using namespace std;

class CurrentSeason : public Car {
private:
    int raceTime;
    queue<Tyre *> tyres;
    Driver *driver;
public:
    CurrentSeason(Driver *d) {
        raceTime = 0;
        driver = d;
    }

    CurrentSeason(string name);

    void addPoints(int p);

    void simulate();

    int getPoints();

    void calculateSpeed();

    virtual void setRaceTime(int rt) { raceTime = rt; }        // raceTime = param
    virtual void incrementRaceTime(int rt) { raceTime += rt; }        // raceTime += param
    virtual int getRaceTime() { return raceTime; }

    void setDriver(Driver *d) { driver = d; }

    Car *clone();

    string getDriverName();

    ~CurrentSeason();
};

#endif
