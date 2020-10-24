#ifndef CAR_H
#define CAR_H

using namespace std;

class Car {
	private:
		int averageSpeed;
	public:
		Car();
		void addPart(Car* part);
		int calculateSpeed();
		Car* clone();
};

#endif