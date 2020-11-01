#include "Electronics.h"
#include <iostream>
#include <string>
using namespace std;

Electronics::Electronics(Car* c){
	type = "Electronics";
}

void Electronics::removePart(string part){
	if(part == this->getType()) cout << part << " has been removed." << endl;
	else DepartmentOutput::removePart(part);
}

double Electronics::getSpeed(){
	return speed*10;
}
