#ifndef CAR_H
#define CAR_H

#include "Car/CurrentSeason/Driver.h"
#include "Car/CurrentSeason/Tyre/Tyre.h"

using namespace std;
/**
 * @class Class Car creates abstract Car object is the component in the Decorator pattern, prototype in Prototype design pattern,Product in Factory method design pattern,Handler in chain of responsibility design pattern
 * @headerfile Car.h "Car/Car.h"
 */
class Car {
protected:
    int averageSpeed; /*! @var a protected varaible that holds the cars average speed */

public:
    /**
     * The constructor for the car class
     */
    Car();

/**
 * The destructor for the car class
 */
    virtual ~Car();

/**
 * Base class returns the points from its driver object, if not base class chain of responsibility goes down chain till it finds base
 * @return the points
 */
    virtual int getPoints();

/**
 * Goes down chain till it finds a current season car to handle request of adding points to driver object
 * @param p points to be added
 */
    virtual void addPoints(int p);

/**
 * adds a new part to the decorator and chain
 * @param part
 */
    virtual void addPart(Car *part);

/**
 *Add all the speeds added together of all the components of decorator design pattern
 * @return the total speed of all decorated parts
 */
    virtual int calculateSpeed();

/**
 *
 * @return
 */
    virtual Car *clone() = 0;

/**
 *
 */
    virtual void simulate();

/**
 *
 */
    virtual void setRaceTime(int);        // raceTime = param
    /**
     *
     */
    virtual void incrementRaceTime(int);    //raceTime += param
    /**
     *
     * @return
     */
    virtual int getRaceTime();

/**
 *
 * @return
 */
    virtual string getDriverName();

/**
 *
 * @param d
 */
    virtual void setDriver(Driver *d);

/**
 *
 * @return
 */
    virtual string getType() = 0;

/**
 *
 * @param part
 * @return
 */
    virtual Car* removePart(string part);

/**
 *
 * @param t
 * @param num
 */
    virtual void addTyres(Tyre **t, int num);

/**
 *
 */
    virtual void popOldTyre();

/**
 *
 * @return
 */
    virtual Tyre *currentTyre();

/**
 *
 * @return
 */
    virtual int getSpeed();


};

#endif
