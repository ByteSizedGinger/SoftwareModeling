#ifndef TRANSPORTSTRATEGY_H
#define TRANSPORTSTRATEGY_H

#include <string>
#include "Team/Transport/Container/Container.h"

using namespace std;

class Container {
private:
bool isBox;
public:
   Container();
   ~Container();
   virtual void print();
   void setIsBox(bool b);
   bool getIsBox();


};

#endif