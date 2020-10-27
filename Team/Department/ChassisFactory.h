#ifndef CHASISFACTORY_H
#define CHASISFACTORY_H

#include "Car/Car.h"

using namespace std;

class ChasisFactory {
private:


public:

    Car *createPart();

    void simulation();

    void otherPartChanged(Car *car);


};

#endif