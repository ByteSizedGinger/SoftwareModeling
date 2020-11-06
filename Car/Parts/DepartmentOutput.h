#ifndef DEPARTMENTOUTPUT_H
#define DEPARTMENTOUTPUT_H

#include "Car/Car.h"
#include <string>
#include <iostream>

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

    Car *removePart(string part);

    string getType();

    Car* getNext();

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

    void printContents(){
        cout << getType() << " ";
        DepartmentOutput* current = this;
        while (current->next->getType() != "current")
        {
            cout << current->next->getType() << " ";
            current = dynamic_cast<DepartmentOutput*>(current->next);
        }
        cout << current->next->getType() << endl;
    }
};

#endif
