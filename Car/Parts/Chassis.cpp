#include "Chassis.h"
#include <iostream>
#include <string>
using namespace std;

Chassis::Chassis(Car* c){
	type = "Chassis";
}

void Chassis::removePart(string part){
	if(part == this->getType()) cout << part << " has been removed." << endl;
	else DepartmentOutput::removePart(part);
}

double Chassis::getSpeed(){
	return speed*250;
}
