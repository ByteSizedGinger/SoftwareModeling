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
	string getDriver();
	int getPerformance();
	void setPerformance(int p);
	int getPoints();
	void setPoints(int p);

    string getName();
	
};

#endif
