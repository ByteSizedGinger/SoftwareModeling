#ifndef TYRE_H
#define TYRE_H

class Tyre {

public:
	virtual int getPerformance() = 0;

	int calculateSpeed(int n);

};

#endif
