#include"goldFish.h"

#include <iomanip>
#include<string>
#include<iostream>
#include<cmath>

using namespace std;

//constructor
goldfish::goldfish() {
	this->name = "Goldie";
	foodEaten = 0.0; // measured in grams
	ageInDays = 0;  // measured in day
	isSwimming = true;
}

//copy constructor
goldfish::goldfish(const goldfish& newGoldFish) {
	this->name = newGoldFish.name;
	this->foodEaten = newGoldFish.foodEaten; // measured in grams
	this->ageInDays = newGoldFish.ageInDays; // measured in days
	this->isSwimming = newGoldFish.isSwimming;
}

//constructor that takes a name 
goldfish::goldfish(const string& newName) {
	this->name = newName; 
	foodEaten = 0.0;
	ageInDays = 0;
	isSwimming = true;
}

//destructor
goldfish::~goldfish() {
	string fish = "Nothing here";
}

//GETTERS
string goldfish::getName() {
	return name; 
}

double goldfish::getFoodEaten() {
	return foodEaten;
}

int goldfish::getAge() {
	return ageInDays;
}

bool goldfish::isAlive() {
	return isSwimming;
}

//SETTERS
void goldfish::setName(string newName) {
	name = newName; 
}

void goldfish::setFoodEaten(const double newFoodEaten) {
	foodEaten = newFoodEaten;
}

void goldfish::setAge(const int newAge) {
	ageInDays = newAge;
}

void goldfish::setIsAlive(const bool isNewSwimming) {
	isSwimming = isNewSwimming;
}

void goldfish::changeName(string newName) {
	name = newName; 
}

//
void goldfish::print()  {
	cout << "Goldfish's name: " << name << "\n";
	cout << "How long it has lived: " << ageInDays << " days\n";
	cout << "The current amount of food: " << foodEaten << " grams\n";
	cout << "Condition: ";

	//Check if the fish is swimming or not -> dead or alive
	if (isSwimming) {

		cout << name << " is swimming\n";

		cout << "o\n";
		cout << "o      ______/~/~/~/__           /((\n";
		cout << "  o  // __            ====__    /_((\n";
		cout << " o  //  @))       ))))      ===/__((\n";
		cout << "    ))           )))))))        __((\n";
		cout << "    \\\\     \\)     ))))    __===\\ _((\n";
		cout << "     \\\\_______________====      \\_((\n";
		cout << "                                 \\((\n\n";
	}
	else
	{
		cout << name << " is dead :(\n";

		cout << "                                 //)\n";
		cout << "     //===============____      //_)\n";
		cout << "    //     (/     ((((    ===__// _)\n";
		cout << "    ((__           ((((((           ((\n";
		cout << " o  \\\\  X          ((((      ===   ((_ \n";
		cout << "  o  \\\\__ ====            __  \\\\   ((_ \n";
		cout << "o      ______\\~\\~\\~\\           \\\\((\n";
		cout << "o\n\n";
	}
}

//Feeding fish function
void goldfish::feedFish(double amount) {
	//Check if the fish is swimming
	if (isSwimming) {
		//add the amount of food
		foodEaten += amount;
		//if more than 0.8
		if (foodEaten > 0.8 ) {
			//the fish is dead
			isSwimming = false;
		}

	}
}

//Next day function
void goldfish::nextDay() {
	//check if the fish is still swimming
	if (isSwimming) {
		//age + 1
		ageInDays++;
		// food - 0.4
		foodEaten -= 0.4;

		//round func from cmath library to round up the value if the input is:
		//0.6
		//0.2
		//0.3
		foodEaten = round(foodEaten*100.0)/100.0;

		//if live more than 10000 days
		if (foodEaten <0.0 || ageInDays > 10000) {
			//the fish is dead
			isSwimming = false;
		}
	}
}
