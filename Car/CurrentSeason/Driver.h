#ifndef DRIVER_H
#define DRIVER_H

#include <string>
using namespace std;

class Driver{

private:
	string name;
	int points;
	int performance;

public:
	Driver(string);
	int getPerformance(){ return performance;}
	void setPerformance(int p){ performance = p;}
	int getPoints(){return points;}
	void setPoints(int p){ points = p;}
	
};

#endif
