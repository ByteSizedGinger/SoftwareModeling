#ifndef AERODYNAMICS_H
#define AERODYNAMICS_H

#include <string>
#include "Car/Parts/DepartmentOutput.h"

using namespace std;

class Aerodynamics: public DepartmentOutput {

public:
    Aerodynamics(Car* c);

};

#endif