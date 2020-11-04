#ifndef DEPARTMENTFACTORY_H
#define DEPARTMENTFACTORY_H

#include "Car/Car.h"
#include "Car/Parts/DepartmentOutput.h"
#include "Team/Department/DepartmentMediator.h"

#include <string>
#include <iostream>
using namespace std;

class DepartmentFactory {
protected:
    DepartmentMediator* mediator;

public:
    DepartmentFactory(DepartmentMediator* mediator);

    ~DepartmentFactory();

    virtual void createPart() = 0;

    virtual void simulation() = 0;

    virtual void otherPartChanged(DepartmentOutput* part) = 0;

    virtual string getType() = 0;
};

#endif