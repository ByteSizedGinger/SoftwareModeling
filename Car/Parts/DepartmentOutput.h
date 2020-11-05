#ifndef DEPARTMENTOUTPUT_H
#define DEPARTMENTOUTPUT_H

#include "Car/Car.h"
#include <string>

using namespace std;

class DepartmentOutput : public Car {
protected:
    int speed;
    string type;
    Car *next;
public:
    DepartmentOutput();

    virtual ~DepartmentOutput();

    int calculateSpeed();

    void addPart(Car *part);

    virtual void removePart(string part);

    string getType() {
        return type;
    }

    Car *getNext() {
        return next;
    }

    virtual int getSpeed();

    virtual Car *clone() = 0;

    void setRaceTime(int rt);

    void incrementRaceTime(int rt);

    int getRaceTime();

    void setDriver(Driver *d);

    int getPoints();

    void addPoints(int p);

    void simulate();

    string getDriverName();

    void addTyres(Tyre **t, int num);

    void popOldTyre();

    Tyre *currentTyre();
};

#endif
