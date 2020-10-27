#ifndef AERODYNAMICSFACTORY_H
#define AERODYNAMICSFACTORY_H

#include "Car/Car.h"

using namespace std;

class AerodynamicsFactory {
private:
    int windTokens;

public:

    Car *createPart();

    void simulation();

    void otherPartChanged(Car *car);

    void windTunnel();

    int getTunnelTokens();

    void decreaseTunnelTokens();


};

#endif