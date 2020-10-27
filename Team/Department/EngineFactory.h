#ifndef ENGINEFACTORY_H
#define ENGINEFACTORY_H

#include "Car/Car.h"
#include "Team/Department/DepartmentFactory.h"
#include "Team/Department/Engine.h"

#include <string>
using namespace std;

class EngineFactory : public DepartmentFactory{
private:
    int windTokens;

public:
    EngineFactory(DepartmentMediator* mediator);

    ~EngineFactory();

    Car* createPart(Car* car);

    void simulation();

    void otherPartChanged(DepartmentOutput* part);

    string getType();
};

#endif