#ifndef EQUIPMENT_H
#define EQUIPMENT_H


#include <string>
#include "Team/Transport/Container/Container.h"


using namespace std;

class Equipment : public Container
{
private:
    string name;
public:
   Equipment(string name);
   void print();

};

#endif
