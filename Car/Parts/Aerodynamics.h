#ifndef AERODYNAMICS_H
#define AERODYNAMICS_H

#include <string>
#include "Car/Parts/DepartmentOutput.h"
#include "Car/Car.h"

using namespace std;

class Aerodynamics : public DepartmentOutput {

public:
    Aerodynamics();

    Aerodynamics *cpy();

    int getSpeed();

    Car *clone();

};

#endif