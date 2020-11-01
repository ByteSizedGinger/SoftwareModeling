#ifndef TEAM_H
#define TEAM_H

class Team {

	private:
		CurrentSeason** currentCars;
		Container* container;
		TransportStrategy* transportStrategy;
		DepartmentFactory** departments;
		int name;
		DepartmentMediator* mediator;
		TeamPoints* constructorPoints;
		NextSeason* nextSeasonCar;

	public:
		Team();
		Team(int string_name);
		~Team();
		void transport();
		void orderTyres();
		CurrentSeason** getCurrentSeasonCars();
		void setEuropeanStrategy();
		void setNonEuropeanStrategy();
		string getName();
		void partChanged();
		void updatePoints();
};

#endif
