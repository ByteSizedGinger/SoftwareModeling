#ifndef TYRE_H
#define TYRE_H

class Tyre {

protected:
	int performance;

public:
	virtual int getPerformance() = 0;

	int calculateSpeed(){return 0;};

	//~Tyre();
};

#endif
