#include "Team/Department/DepartmentFactory.h"

DepartmentFactory::DepartmentFactory(DepartmentMediator* mediator) : mediator(mediator), part(nullptr){
    
}

DepartmentFactory::~DepartmentFactory(){
    //Team is responsible for de-allocating the mediator

    if(part){
        delete part;
        part = nullptr;
    }
}

int DepartmentFactory::getPartSpeed(Car* oldPart, string partType){
    if(oldPart->getType() == partType){
        return oldPart->getSpeed();
    }else{
        return getPartSpeed(oldPart->getNext(), partType);
    }
}