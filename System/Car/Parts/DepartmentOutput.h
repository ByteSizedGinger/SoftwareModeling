#ifndef DEPARTMENTOUTPUT_H
#define DEPARTMENTOUTPUT_H

#include "Car/Car.h"
#include <string>
#include <iostream>

using namespace std;
/**
 * @class A class DepartmentOutput Decorator partcipant of the decorator design pattern,concreteHandler of the chain of responsibilities design pattern,Product of the factory method design pattern
 * @headerfile DepartmentOutput.h "Car/Parts/DepartmentOutput.h"
 */
class DepartmentOutput : public Car {
protected:
    int speed;/*! @var protected attribute speed of part */
    string type;/*! @var protected attribute the name of the type of part*/
    Car *next;/*! @var protected attribute points to the component of the decorator design pattern*/
public:
    /**
     *Constructor creates a departmentoutput object
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
