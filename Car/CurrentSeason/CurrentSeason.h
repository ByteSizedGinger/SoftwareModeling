
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
    CurrentSeason(string name);

    void addPoints(int p);

    void simulate();

    int getPoints();

    int calculateSpeed();

    virtual void setRaceTime(int rt);

    virtual void incrementRaceTime(int rt);

    virtual int getRaceTime();

    void setDriver(Driver *d);

    Car *clone();

    string getDriverName();

    ~CurrentSeason();

    string getType();

    void addTyres(Tyre** t, int num);

    void popOldTyre();

    Tyre* currentTyre();
};

#endif

