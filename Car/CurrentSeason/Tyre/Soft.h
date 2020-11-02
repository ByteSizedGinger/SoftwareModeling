#ifndef SOFT_H
#define SOFT_H
#include "Tyre.h"

class Soft : public Tyre {


public:
	int getPerformance();
	int calculateSpeed();
	Soft();
};

#endif
