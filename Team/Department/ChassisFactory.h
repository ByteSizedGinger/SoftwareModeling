#ifndef CHASISFACTORY_H
#define CHASISFACTORY_H

#include "Car/Car.h"
#include "Team/Department/DepartmentFactory.h"
#include "Team/Department/Chassis.h"

#include <string>
using namespace std;

class ChassisFactory : public DepartmentFactory{
private:


public:
    ChassisFactory(DepartmentMediator* mediator);

    ~ChassisFactory();

    void createPart();

    void simulation();

    void otherPartChanged(DepartmentOutput* part);

    string getType();
};

#endif