#ifndef Electronics_H
#define Electronics_H

#include <string>
#include "Car/Parts/DepartmentOutput.h"
#include "Car/Car.h"

using namespace std;

class Electronics : public DepartmentOutput {

public:
    Electronics();

    Electronics *cpy();

    int getSpeed();

    Car *clone();
};

#endif
