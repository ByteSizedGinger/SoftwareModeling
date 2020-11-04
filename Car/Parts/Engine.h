#ifndef ENGINE_H
#define ENGINE_H

#include <string>
#include "Car/Parts/DepartmentOutput.h"

using namespace std;

class Engine : public DepartmentOutput {

public:
    Engine();

	Engine* cpy();

    void removePart(string part);

    int getSpeed();

	Car *clone();
};

#endif
