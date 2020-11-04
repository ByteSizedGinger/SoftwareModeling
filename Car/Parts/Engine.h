#ifndef ENGINE_H
#define ENGINE_H

#include <string>
#include "Car/Parts/DepartmentOutput.h"

using namespace std;

class Engine : public DepartmentOutput {

public:
    Engine();

    void removePart(string part);

    double getSpeed();

};

#endif
