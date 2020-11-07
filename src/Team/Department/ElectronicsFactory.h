#ifndef ELECTRONICSFACTORY_H
#define ELECTRONICSFACTORY_H

#include "Car/Car.h"
#include "Team/Department/DepartmentFactory.h"
#include "Car/Parts/Electronics.h"

#include <string>
using namespace std;
/**
 *
 */
class ElectronicsFactory : public DepartmentFactory {
private:

public:
    /**
     *
     * @param mediator
     */
    ElectronicsFactory(DepartmentMediator *mediator);

/**
 *
 */
    ~ElectronicsFactory();

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