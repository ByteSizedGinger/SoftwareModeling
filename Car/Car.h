#ifndef CAR_H
#define CAR_H

#include "Car/CurrentSeason/Driver.h"
#include "Car/CurrentSeason/Tyre/Tyre.h"

using namespace std;

class Car {
protected:
    int averageSpeed;

public:
    Car();

    virtual ~Car();

    virtual int getPoints();

    virtual void addPoints(int p);

    virtual void addPart(Car *part);

    virtual int calculateSpeed();

    virtual Car *clone() = 0;

    virtual void simulate();

    virtual void setRaceTime(int);        // raceTime = param
    virtual void incrementRaceTime(int);    //raceTime += param
    virtual int getRaceTime();

    virtual string getDriverName();

    virtual void setDriver(Driver *d);

    virtual string getType() = 0;

    virtual Car* removePart(string part);

    virtual void addTyres(Tyre **t, int num);

    virtual void popOldTyre();

    virtual Tyre *currentTyre();
};

#endif
