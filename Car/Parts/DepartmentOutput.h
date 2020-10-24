#ifndef DEPARTMENTOUTPUT_H
#define DEPARTMENTOUTPUT_H

#include "Car/Car.h"
#include <string>

using namespace std;

class DepartmentOutput: public Car {
	protected:
		int speed;
		Car* car;
		string type;
	public:
		DepartmentOutput();
		virtual ~DepartmentOutput();
		int calculateSpeed();
		void addPart(Car* part);
		void removePart(string part);
		string getType();
		Car* getNext();
		DepartmentOutput* clone();
};

#endif