#ifndef ENGINEFACTORY_H
#define ENGINEFACTORY_H

#include "Car/Car.h"
#include "Team/Department/DepartmentFactory.h"
#include "Car/Parts/Engine.h"

#include <string>
using namespace std;
/**
 * @class
 * @headerfile
 */
class EngineFactory : public DepartmentFactory {
private:

public:
    /**
     *
     * @param mediator
     */
    EngineFactory(DepartmentMediator *mediator);

/**
 *
 */
    ~EngineFactory();

/**
 *
 * @param oldPart
 * @param season
 */
    void createPart(DepartmentOutput* oldPart, string season);

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