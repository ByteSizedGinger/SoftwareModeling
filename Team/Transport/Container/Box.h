#ifndef BOX_H
#define BOX_H

#include <string>
#include <list>
#include "Team/Transport/Container/Container.h"

using namespace std;

class Box {
private:
list<Container*> containers;
public:
Box();
~Box();
void add(Container* item);
void remove(Container* item);
void print();
};

#endif