#ifndef Electronics_H
#define Electronics_H

#include <string>
#include "Car/Parts/DepartmentOutput.h"

using namespace std;

class Electronics : public DepartmentOutput {

public:
    Electronics();

	Electronics* cpy();

    void removePart(string part);

    double getSpeed();

	Car *clone();
};

#endif
