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