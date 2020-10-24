#ifndef TRANSPORTSTRATEGY_H
#define TRANSPORTSTRATEGY_H

#include <string>
#include "Team/Transport/Container/Container.h"

using namespace std;

class TransportStrategy {

public:
TransportStrategy();
virtual transport(Container* container)=0;
};

#endif
