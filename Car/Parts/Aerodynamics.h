#ifndef AERODYNAMICS_H
#define AERODYNAMICS_H

#include <string>
#include "Car/Parts/DepartmentOutput.h"
#include "Car/Car.h"

using namespace std;
/**
 * @class
 * @headerfile
 */
class Aerodynamics : public DepartmentOutput {

public:
    /**
     *
     */
    Aerodynamics();

/**
 *
 * @return
 */
    Aerodynamics *cpy();

/**
 *
 * @return
 */
    int getSpeed();

/**
 *
 * @return
 */
    Car *clone();

};

#endif