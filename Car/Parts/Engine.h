#ifndef ENGINE_H
#define ENGINE_H

#include <string>
#include "Car/Parts/DepartmentOutput.h"

using namespace std;

class Engine : public DepartmentOutput {

public:
    Engine(Car* c);

};

#endif
