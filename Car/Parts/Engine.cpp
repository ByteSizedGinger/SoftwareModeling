#include "Engine.h"
#include <iostream>
#include <string>
using namespace std;

Engine::Engine(){
    type = "Engine";
}

Engine* Engine::cpy() { //might have to make return type Car*
	Engine* temp = new Engine();
	temp.speed = speed;
	temp->next = nullptr;
	return temp;
}

void Engine::removePart(string part) {
    if (part == this->getType()) cout << part << " has been removed." << endl;
    else DepartmentOutput::removePart(part);
}

double Engine::getSpeed(){
    return speed * 500;
}

Car* Engine::clone() {
	Car* temp = cpy();
	if (next != nullptr) 
	{
		temp->next = next->clone();
	}
	return temp;
}