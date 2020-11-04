#ifndef CHASIS_H
#define CHASIS_H

#include <string>
#include "Car/Parts/DepartmentOutput.h"

using namespace std;

class Chasis : public DepartmentOutput {

public:
    Chassis();

    void removePart(string part);

    double getSpeed();

};

#endif
