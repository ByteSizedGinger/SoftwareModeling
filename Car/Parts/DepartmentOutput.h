#ifndef DEPARTMENTOUTPUT_H
#define DEPARTMENTOUTPUT_H

#include "Car/Car.h"
#include <string>
#include <iostream>

using namespace std;
/**
 * @class
 * @headerfile
 */
class DepartmentOutput : public Car {
protected:
    int speed;/*! @var */
    string type;/*! @var */
    Car *next;/*! @var */
public:
    /**
     *
     */
    DepartmentOutput();

/**
 *
 */
    virtual ~DepartmentOutput();

/**
 *
 * @return
 */
    int calculateSpeed();

/**
 *
 * @param part
 */
    void addPart(Car *part);

/**
 *
 * @param part
 * @return
 */
    Car *removePart(string part);

/**
 *
 * @return
 */
    string getType();

/**
 *
 * @return
 */
    Car* getNext();

/**
 *
 * @return
 */
    virtual int getSpeed();

/**
 *
 * @return
 */
    virtual Car *clone() = 0;

/**
 *
 * @param rt
 */
    void setRaceTime(int rt);

/**
 *
 * @param rt
 */
    void incrementRaceTime(int rt);

/**
 *
 * @return
 */
    int getRaceTime();

/**
 *
 * @param d
 */
    void setDriver(Driver *d);

/**
 *
 * @return
 */
    int getPoints();

/**
 *
 * @param p
 */
    void addPoints(int p);

/**
 *
 */
    void simulate();

/**
 *
 * @return
 */
    string getDriverName();

/**
 *
 * @param t
 * @param num
 */
    void addTyres(Tyre **t, int num);

/**
 *
 */
    void popOldTyre();

/**
 *
 * @return
 */
    Tyre *currentTyre();

};

#endif
