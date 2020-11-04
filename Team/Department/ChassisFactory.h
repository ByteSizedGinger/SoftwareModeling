#ifndef CHASISFACTORY_H
#define CHASISFACTORY_H

#include "Car/Car.h"
#include "Team/Department/DepartmentFactory.h"
#include "Car/Parts/Chassis.h"

#include <string>
using namespace std;

class ChassisFactory : public DepartmentFactory{
private:


public:
    ChassisFactory(DepartmentMediator* mediator);

    ~ChassisFactory();

    void createPart(DepartmentOutput* oldPart);

    void simulation();

    void otherPartChanged(DepartmentOutput* part);

    string getType();
};

#endif