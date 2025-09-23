#pragma once
#include<string>

using namespace std;

class goldfish {

public:
/// <summary>
/// 
/// 
/// </summary>

	//constructor
	goldfish();

	//constructor that takes a name 
	goldfish(const string& name);

	//copyconstructor 
	goldfish(const goldfish&);

	//destructor
	~goldfish();

	//GETTERS
	string getName();
	double getFoodEaten();
	int getAge();
	bool isAlive();
	
	//SETTERs
	void setName(string);
	void setFoodEaten(double);
	void setAge(int);
	void setIsAlive(bool);
	void changeName(string);

	//to do stuff list 
	void print();
	void feedFish(double);
	void nextDay();


private: 
	string name; 
	double foodEaten; // measured in gram
	int ageInDays; // measured in days
	bool isSwimming;

};
