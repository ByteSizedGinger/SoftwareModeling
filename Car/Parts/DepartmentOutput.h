#ifndef DEPARTMENTOUTPUT_H
#define DEPARTMENTOUTPUT_H

#include "Car/Car.h"
#include <string>

using namespace std;

class DepartmentOutput: public Car {
	protected:
		int speed;
		string type;
		Car* next;
	public:
		DepartmentOutput();
		virtual ~DepartmentOutput();
		double calculateSpeed();
		void addPart(Car* part);
		virtual void removePart(string part);
		string getType(){return type;}
		Car* getNext(){return next;}
		virtual double getSpeed();
		Car* clone();
		virtual void setRaceTime(int rt);
		virtual void incrementRaceTime(int rt);
		virtual int getRaceTime();
		void setDriver(Driver* d);
};

#endif
