#ifndef CAR_H
#define CAR_H

#include "Car/CurrentSeason/Driver.h"

using namespace std;

class Car {
private:
    int averageSpeed;

public:
    Car();
    virtual ~Car();
    virtual int getPoints();
    virtual void addPoints(int p);
    virtual void addPart(Car *part);
    virtual int calculateSpeed();
    virtual Car* clone() = 0;
    virtual void simulate();
    virtual void setRaceTime(int);        // raceTime = param
    virtual void incrementRaceTime(int);    //raceTime += param
    virtual int getRaceTime();
    virtual string getDriverName();
    virtual void setDriver(Driver* d);
};

#endif
