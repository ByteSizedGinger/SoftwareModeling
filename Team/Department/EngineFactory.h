#ifndef ENGINEFACTORY_H
#define ENGINEFACTORY_H

#include "Car/Car.h"
#include "Team/Department/DepartmentFactory.h"
#include "Team/Car/Parts/Engine.h"

#include <string>
using namespace std;

class EngineFactory : public DepartmentFactory{
private:
    int windTokens;

public:
    EngineFactory(DepartmentMediator* mediator);

    ~EngineFactory();

    void createPart(DepartmentOutput* oldPart);

    void simulation();

    void otherPartChanged(DepartmentOutput* part);

    string getType();
};

#endif