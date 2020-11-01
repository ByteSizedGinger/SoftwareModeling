#ifndef CAR_H
#define CAR_H

using namespace std;

class Car {
	private:
		double averageSpeed;
	public:
		Car();
		void addPart(Car* part) = 0;
		void calculateSpeed() = 0;
		Car* clone();
		void addPoints(int p) = 0;
		void simulate() = 0;
		int getPoints() = 0;
		void setRaceTime(int) = 0;		// raceTime = param
		void incrementRaceTime(int) = 0;	//raceTime += param
};

#endif
