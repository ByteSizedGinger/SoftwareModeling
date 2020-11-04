#ifndef DEPARTMENTFACTORY_H
#define DEPARTMENTFACTORY_H

#include "Car/Car.h"
#include "Team/Department/DepartmentOutput.h"
#include "Team/Department/DepartmentMediator.h"

#include <string>
using namespace std;

class DepartmentFactory {
protected:
    DepartmentMediator* mediator;

public:
    DepartmentFactory(DepartmentMediator* mediator);

    ~DepartmentFactory();

    virtual void createPart(DepartmentOutput* oldPart) = 0;

    virtual void simulation() = 0;

    virtual void otherPartChanged(DepartmentOutput* part) = 0;

    virtual string getType() = 0;

    int getPartSpeed(Car* oldPart, string partType);
};

#endif