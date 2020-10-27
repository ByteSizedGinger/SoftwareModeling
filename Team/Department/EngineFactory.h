#ifndef ENGINEFACTORY_H
#define ENGINEFACTORY_H

#include "Car/Car.h"

using namespace std;

class EngineFactory {
private:
    int windTokens;

public:

    Car *createPart();

    void simulation();

    void otherPartChanged(Car *car);


};

#endif