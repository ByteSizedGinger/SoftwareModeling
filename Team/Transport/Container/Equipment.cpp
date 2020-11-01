#include <string>
#include <iostream>
#include "Team/Transport/Container/Equipment.h"

using namespace std;

Equipment::Equipment(string name): Container(){
  this.name=name;
}

void Equipment::print(){
  cout<<name<<endl;
}
