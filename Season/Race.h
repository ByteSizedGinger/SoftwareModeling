#ifndef RACE_H
#define RACE_H

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define BLUE    "\033[34m" 
#define GREEN   "\033[32m"

#include <string>
#include "Car/Car.h"

using namespace std;
/**
 * @class
 * @headerfile
 */
class Race {

private:
    int laps;/*! @var */
    bool european;/*! @var */
    int date;  /*! @var */
    string name;/*! @var */
    Car **cars;/*! @var */
    int numCars;/*! @var */
    int averageLapTime;/*! @var */
/**
 *
 */
    void runFreePractice2();

/**
 *
 */
    void runQualifying();

/**
 *
 */
    void runFreePractice1();

/**
 *
 */
    void pitStop();

/**
 *
 */
    void runRace();

/**
 *
 */
    void sortDrivers();

/**
 *
 */
    void allocatePoints();

public:
    /**
     *
     * @param l
     * @param euro
     * @param d
     * @param n
     * @param avgL
     */
    Race(int l, bool euro, int d, string n, int avgL);

/**
 *
 */
    void printLeaderBoard();

/**
 *
 * @return
 */
    int getDate();

/**
 *
 * @return
 */
    bool isEuropean();

/**
 *
 * @param c
 * @param num
 */
    void runRaceWeekend(Car **c, int num);

/**
*
*/
    string getName();
};

#endif
