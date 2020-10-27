#ifndef DEPARTMENTFACTORY_H
#define DEPARTMENTFACTORY_H

#include "Car/Car.h"
#include "Team/Department/DepartmentOutput.h"
#include "Team/Department/DepartmentMediator.h"


using namespace std;

class DepartmentFactory {
private:
    DepartmentOutput *part;
    DepartmentMediator *mediator;

public:
    DepartmentFactory(DepartmentMediator *mediator);

    ~DepartmentFactory();

    virtual Car *createPart() = 0;

    virtual void simulation() = 0;

    virtual void otherPartChanged(Car *car) = 0;


};

#endif