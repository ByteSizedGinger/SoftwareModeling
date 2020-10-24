#ifndef TRANSPORTSTRATEGY_H
#define TRANSPORTSTRATEGY_H

#include <string>


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