#ifndef AERODYNAMICSFACTORY_H
#define AERODYNAMICSFACTORY_H

#include "Car/Car.h"
#include "Team/Department/DepartmentFactory.h"
#include "Car/Parts/Aerodynamics.h"

using namespace std;

class AerodynamicsFactory : public DepartmentFactory {
private:
    int windTokens;
    int windTunnel();

public:
    AerodynamicsFactory(DepartmentMediator* mediator);

    ~AerodynamicsFactory();

    void createPart(DepartmentOutput* oldPart,string season);

    void simulation();

    void otherPartChanged(DepartmentOutput* part);

    int getTunnelTokens();

    void decreaseTunnelTokens();

    string getType();
};

#endif