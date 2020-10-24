#ifndef TRUCK_H
#define TRUCK_H

#include <string>
#include "Team/Transport/Container/Container.h"

using namespace std;

class Truck {

public:
    Truck();
    void transport(Container* container);
};

#endif