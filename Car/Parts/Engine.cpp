#include "Engine.h"
#include <iostream>
#include <string>
using namespace std;

Engine::Engine(){
	type = "Engine";
}

void Engine::removePart(string part){
	if(part == this->getType()) cout << part << " has been removed." << endl;
	DepartmentOutput::removePart(part);
}

double Engine::getSpeed(){
	return speed*500;
}

void Engine::setRaceTime(int rt){
	DepartmentOutput::setRaceTime(rt);
}

void Engine::incrementRaceTime(int rt){
	DepartmentOutput::incrementRaceTime(rt);
}

int Engine::getRaceTime(){
	return DepartmentOutput::getRaceTime(rt);
}

void Engine::setDriver(Driver* d){
	DepartmentOutput::setDriver(d);
}