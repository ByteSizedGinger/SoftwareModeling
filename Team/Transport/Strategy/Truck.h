#ifndef TRUCK_H
#define TRUCK_H

#include <string>
#include "Team/Transport/Strategy/TransportStrategy.h"

using namespace std;

class Truck : public TransportStrategy {

public:
    Truck();
    void transport(Container* container);
};

#endif
