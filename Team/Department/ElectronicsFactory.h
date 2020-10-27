#ifndef ELECTRONICSFACTORY_H
#define ELECTRONICSFACTORY_H

#include "Car/Car.h"

using namespace std;

class ElectronicsFactory {
private:
    int windTokens;

public:

    Car *createPart();

    void simulation();

    void otherPartChanged(Car *car);


};

#endif