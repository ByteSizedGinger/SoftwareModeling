#ifndef AERODYNAMICSFACTORY_H
#define AERODYNAMICSFACTORY_H

#include "Car/Car.h"
#include "Team/Department/DepartmentFactory.h"
#include "Car/Parts/Aerodynamics.h"

using namespace std;
/**
 * @class
 * @headerfile
 */
class AerodynamicsFactory : public DepartmentFactory {
private:
    int windTokens;/*! @var */
    int windTunnel();/*! @var */

public:
    /**
     *
     * @param mediator
     */
    AerodynamicsFactory(DepartmentMediator *mediator);

/**
 *
 */
    ~AerodynamicsFactory();

/**
 *
 * @param oldPart
 * @param season
 */
    void createPart(DepartmentOutput* oldPart,string season);

/**
 *
 */
    void simulation();

/**
 *
 * @param part
 */
    void otherPartChanged(DepartmentOutput* part);

/**
 *
 * @return
 */
    int getTunnelTokens();

/**
 *
 */
    void decreaseTunnelTokens();

/**
 *
 * @return
 */
    string getType();
};

#endif