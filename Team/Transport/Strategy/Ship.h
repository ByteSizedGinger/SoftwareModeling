#ifndef SHIP_H
#define SHIP_H

#include <string>
#include "Team/Transport/Container/Container.h"

using namespace std;

class Ship {

public:
    Ship();

    void transport(Container *container);
};

#endif