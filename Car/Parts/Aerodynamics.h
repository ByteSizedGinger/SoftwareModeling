#ifndef AERODYNAMICS_H
#define AERODYNAMICS_H

#include <string>
#include "Car/Parts/DepartmentOutput.h"

using namespace std;

class Aerodynamics : public DepartmentOutput {

public:
    Aerodynamics();

    void removePart(string part);

    double getSpeed();


};

#endif
