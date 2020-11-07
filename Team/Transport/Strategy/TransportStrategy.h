#ifndef TRANSPORTSTRATEGY_H
#define TRANSPORTSTRATEGY_H

#include <string>
#include "Team/Transport/Container/Container.h"

using namespace std;
/**
 * @class
 * @headerfile
 */
class TransportStrategy {

public:
    /**
     *
     */
    TransportStrategy();

/**
 *
 * @param container
 */
    virtual void transport(Container *container) = 0;
};

#endif
