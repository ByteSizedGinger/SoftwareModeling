#include "Aerodynamics.h"
#include <iostream>
#include <string>
using namespace std;

Aerodynamics::Aerodynamics(){
	type = "Aerodynamics";
}

void Aerodynamics::removePart(string part){
	if(part == this->getType()) cout << part << " has been removed." << endl;
	DepartmentOutput::removePart(part);
}

double Aerodynamics::getSpeed(){
	return speed*1000;
}

void Aerodynamics::setRaceTime(int rt){
	DepartmentOutput::setRaceTime(rt);
}

void Aerodynamics::incrementRaceTime(int rt){
	DepartmentOutput::incrementRaceTime(rt);
}

int Aerodynamics::getRaceTime(){
	return DepartmentOutput::getRaceTime(rt);
}

void Aerodynamics::setDriver(Driver* d){
	DepartmentOutput::setDriver(d);
}