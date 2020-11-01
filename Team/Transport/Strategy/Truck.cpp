#include <string>
#include <iostream>
#include "Team/Transport/Strategy/Truck.h"

using namespace std;

Truck::Truck(){

}

void Truck::transport(Container * container){
  container->print();
}
