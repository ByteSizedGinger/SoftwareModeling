#ifndef ELECTRONICSFACTORY_H
#define ELECTRONICSFACTORY_H

#include "Car/Car.h"
#include "Team/Department/DepartmentFactory.h"
#include "Team/Department/Electronics.h"

#include <string>
using namespace std;

class ElectronicsFactory : public DepartmentFactory {
private:
    int windTokens;

public:
    ElectronicsFactory(DepartmentMediator* mediator);

    ~ElectronicsFactory();

    void createPart();

    void simulation();

    void otherPartChanged(DepartmentOutput* part);

    string getType();
};

#endif