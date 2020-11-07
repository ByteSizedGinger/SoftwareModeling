#ifndef CONTAINER_H
#define CONTAINER_H

#include <string>


using namespace std;
/**
 * @class
 * @headerfile
 */
class Container {
private:
    bool isBox;/*! @var */
public:
    /**
     *
     */
    Container();

    /**
     *
     */
    virtual ~Container();

    /**
     *
     */
    virtual void print() = 0;

    /**
     *
     * @param b
     */
    void setIsBox(bool b);

    /**
     *
     * @return
     */
    bool getIsBox();


};

#endif
