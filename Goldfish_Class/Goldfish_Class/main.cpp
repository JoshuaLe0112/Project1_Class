#include<iostream>
#include"goldFish.h"
#include<string>

using namespace std;

int main(int argc, char * argv[]) {

	string name;
	double food;

	//Create a goldfish
	goldfish goldfish1(name);
	//ask the user to name the fish
	cout <<"Enter your gold fish name: ";
	getline(cin, name);

	//check if the fish is still alive
	while (goldfish1.isAlive()) {

			//ask how many grams to feed
			cout <<"How many grams of food do you want to feed " <<goldfish1.getName() << ": ";
			cin >> food;
			//feed the fish
			goldfish1.feedFish(food);
			//advance the day
			goldfish1.nextDay();
			//print out the fish
			goldfish1.print();

			//if the fish is dead
			if (!goldfish1.isAlive()) {
				//print the fish and exit the loop
				goldfish1.print();
				break;
			}

	}


	return 0; 

}