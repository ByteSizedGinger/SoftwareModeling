#ifndef BOX_H
#define BOX_H

#include <string>
#include <list>
#include "Team/Transport/Container/Container.h"

using namespace std;
/**
 * @class
 * @headerfile
 */
class Box : public Container {
private:
    list<Container *> containers;/*! @var */
public:
    /**
     *
     */
    Box();

    /**
     *
     */
    ~Box();

    /**
     *
     * @param item
     */
    void add(Container *item);

    /**
     *
     */
    void print();
};

#endif
