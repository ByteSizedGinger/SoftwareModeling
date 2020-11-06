#ifndef MEDIUM_H
#define MEDIUM_H
#include "Tyre.h"

class Medium : public Tyre {


public:
	int getPerformance();
	int calculateSpeed();
	Medium();
};

#endif
