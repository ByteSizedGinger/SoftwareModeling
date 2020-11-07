#ifndef DEPARTMENTFACTORY_H
#define DEPARTMENTFACTORY_H

#include "Car/Car.h"
#include "Car/Parts/DepartmentOutput.h"
#include "Team/Department/DepartmentMediator.h"

#include <iostream>
#include <string>
using namespace std;

class DepartmentMediator;
/**
 * @class
 * @headerfile
 */
class DepartmentFactory {
protected:
    DepartmentMediator *mediator;/*! @var */

public:
    /**
     *
     * @param mediator
     */
    DepartmentFactory(DepartmentMediator *mediator);

/**
 *
 */
    ~DepartmentFactory();

/**
 *
 * @param oldPart
 * @param season
 */
    virtual void createPart(DepartmentOutput* oldPart,string season) = 0;

/**
 *
 */
    virtual void simulation() = 0;

/**
 *
 * @param part
 */
    virtual void otherPartChanged(DepartmentOutput* part) = 0;

/**
 *
 * @return
 */
    virtual string getType() = 0;

/**
 *
 * @param oldPart
 * @param partType
 * @return
 */
    int getPartSpeed(Car* oldPart, string partType);
};

#endif