#ifndef CAR_H
#define CAR_H

#include "Car/CurrentSeason/Driver.h"

using namespace std;

class Car {
private:
    double averageSpeed;
    Driver *driver;

public:
    Car();

    int getPoints();

    void addPoints(int p);

    virtual void addPart(Car *part) = 0;

    virtual void calculateSpeed() = 0;

    virtual Car* clone() = 0;

    virtual void simulate() = 0;

    virtual void setRaceTime(int) = 0;        // raceTime = param
    virtual void incrementRaceTime(int) = 0;    //raceTime += param
    virtual int getRaceTime() = 0;
    virtual string getDriverName() = 0;
};

#endif
