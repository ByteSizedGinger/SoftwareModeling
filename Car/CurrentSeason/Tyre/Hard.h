#ifndef HARD_H
#define HARD_H
#include "Tyre.h"

class Hard : public Tyre {


public:
	int getPerformance();
	int calculateSpeed();
	Hard();
};

#endif
