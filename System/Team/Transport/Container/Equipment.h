#ifndef EQUIPMENT_H
#define EQUIPMENT_H


#include <string>
#include "Team/Transport/Container/Container.h"


using namespace std;
/**
 * @class
 * @headerfile
 */
class Equipment : public Container {
private:
    string name;/*! @var */
public:
    /**
     *
     * @param name
     */
    Equipment(string name);

    /**
     *
     */
    void print();

};

#endif
