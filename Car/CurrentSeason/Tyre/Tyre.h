#ifndef TYRE_H
#define TYRE_H

class Tyre {

public:
	virtual int getPerformance(int n) = 0;

	int calculateSpeed();

};

#endif
