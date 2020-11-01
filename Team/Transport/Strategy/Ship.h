#ifndef SHIP_H
#define SHIP_H

#include <string>
#include "Team/Transport/Strategy/TransportStrategy.h"

using namespace std;

class Ship {

public:
    Ship();

    void transport(Container *container);
};

#endif
