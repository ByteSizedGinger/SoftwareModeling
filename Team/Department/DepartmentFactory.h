#ifndef DEPARTMENTFACTORY_H
#define DEPARTMENTFACTORY_H

#include "Car/Car.h"
#include "Car/Parts/DepartmentOutput.h"
#include "Team/Department/DepartmentMediator.h"

#include <iostream>
#include <string>
using namespace std;

class DepartmentMediator;

class DepartmentFactory {
protected:
    DepartmentMediator* mediator;

public:
    DepartmentFactory(DepartmentMediator* mediator);

    ~DepartmentFactory();

    virtual void createPart(DepartmentOutput* oldPart,string season) = 0;

    virtual void simulation() = 0;

    virtual void otherPartChanged(DepartmentOutput* part) = 0;

    virtual string getType() = 0;

    int getPartSpeed(Car* oldPart, string partType);
};

#endif