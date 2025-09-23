#include"goldFish.h"
#include<string>
#include<iostream>

using namespace std;

//constructor
goldfish::goldfish() {
	this->name = "Goldie";
	foodEaten = 0.0;
	ageInDays = 0;
	isSwimming = true;
}

//copy constructor
goldfish::goldfish(const goldfish& newGoldFish) {
	this->name = newGoldFish.name;
	this->foodEaten = newGoldFish.foodEaten;
	this->ageInDays = newGoldFish.ageInDays;
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
void goldfish::print() {
	cout << "Goldfish's name: " << name << "\n";
	cout << "How long it has live: " << ageInDays << " days\n";
	cout << "The current amount of food: " << foodEaten << " gram\n";
	cout << "Condition: \n";
	if (isSwimming) {

		cout << "Still alive!!!!\n";

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

void goldfish::feedFish(double amount) {
	
	if (isSwimming) {
		foodEaten += amount;
		if (foodEaten > 0.8) {
			setIsAlive(false);
		}
	}
	else {
		cout <<"Cannot feed anymore because " << name << " is dead :((\n\n";
	}
}


void goldfish::nextDay() {
	if (isSwimming) {
		ageInDays++;
		foodEaten -= 0.4;
		if (ageInDays == 1000) {
			setIsAlive(false);
		}
	}
}
