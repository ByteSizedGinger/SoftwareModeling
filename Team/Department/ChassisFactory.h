#ifndef CHASISFACTORY_H
#define CHASISFACTORY_H

#include "Car/Car.h"
#include "Team/Department/DepartmentFactory.h"
#include "Car/Parts/Chassis.h"

#include <string>
using namespace std;
/**
 * @class
 * @headerfile
 */
class ChassisFactory : public DepartmentFactory {
private:


public:
    /**
     *
     * @param mediator
     */
    ChassisFactory(DepartmentMediator *mediator);

/**
 *
 */
    ~ChassisFactory();

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
    string getType();
};

#endif