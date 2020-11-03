#include "Chassis.h"
#include <iostream>
#include <string>
using namespace std;

Chassis::Chassis(){
	type = "Chassis";
}

void Chassis::removePart(string part){
	if(part == this->getType()) cout << part << " has been removed." << endl;
	DepartmentOutput::removePart(part);
}

double Chassis::getSpeed(){
	return speed*250;
}

void Chassis::setRaceTime(int rt){
	DepartmentOutput::setRaceTime(rt);
}

void Chassis::incrementRaceTime(int rt){
	DepartmentOutput::incrementRaceTime(rt);
}

int Chassis::getRaceTime(){
	return DepartmentOutput::getRaceTime(rt);
}

void Chassis::setDriver(Driver* d){
	DepartmentOutput::setDriver(d);
}