#ifndef TYRE_H
#define TYRE_H
/**
 *Tyre class. Abstract class in the template method implements the template method calculate speed
 */
class Tyre {

public:
    /**
    * Function getPerformance- is the primitive operation of the template method
    * @return int - the performance of the tyre
    */
    virtual int getPerformance() = 0;

    /**
       * Function calculate speed the template method implemented in Tyre
       * @return int the speed
       * @param n int the speed to weight according to tyre type
       */
    int calculateSpeed(int n);


};

#endif
