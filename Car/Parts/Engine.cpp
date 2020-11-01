#include "Engine.h"
#include <iostream>
#include <string>
using namespace std;

Engine::Engine(Car* c){
	type = "Engine";
}

void Engine::removePart(string part){
	if(part == this->getType()) cout << part << " has been removed." << endl;
	else DepartmentOutput::removePart(part);
}

double Engine::getSpeed(){
	return speed*500;
}
