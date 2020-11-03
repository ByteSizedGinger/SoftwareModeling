#include "Electronics.h"
#include <iostream>
#include <string>
using namespace std;

Electronics::Electronics(){
	type = "Electronics";
}

void Electronics::removePart(string part){
	if(part == this->getType()) cout << part << " has been removed." << endl;
	DepartmentOutput::removePart(part);
}

double Electronics::getSpeed(){
	return speed*10;
}

void Electronics::setRaceTime(int rt){
	DepartmentOutput::setRaceTime(rt);
}

void Electronics::incrementRaceTime(int rt){
	DepartmentOutput::incrementRaceTime(rt);
}

int Electronics::getRaceTime(){
	return DepartmentOutput::getRaceTime(rt);
}

void Electronics::setDriver(Driver* d){
	DepartmentOutput::setDriver(d);
}