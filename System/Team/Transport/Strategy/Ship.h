#ifndef SHIP_H
#define SHIP_H

#include <string>
#include "Team/Transport/Strategy/TransportStrategy.h"

using namespace std;
/**
 * @class
 * @headerfile
 */
class Ship : public TransportStrategy {

public:
    /**
     *
     */
    Ship();

/**
 *
 * @param container
 */
    void transport(Container *container);
};

#endif
