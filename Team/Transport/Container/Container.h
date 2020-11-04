#ifndef CONTAINER_H
#define CONTAINER_H

#include <string>


using namespace std;

class Container {
private:
bool isBox;
public:
   Container();
   virtual ~Container();
   virtual void print();
   void setIsBox(bool b);
   bool getIsBox();


};

#endif
