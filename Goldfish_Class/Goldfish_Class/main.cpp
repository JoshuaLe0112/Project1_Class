#include<iostream>
#include"goldFish.h"
#include<string>

using namespace std;

int main(int argc, char * argv[]) {

	string name;
	//ask the user to name the fish
	cout <<"Enter your gold fish name: ";
	getline(cin, name);
	//Create a goldfish
	goldfish goldfish1(name);

	//check if the fish is still alive
	 while (goldfish1.isAlive()) {
	 		double food;
	 		//ask how many grams to feed
	 		cout <<"How many grams of food do you want to feed " <<goldfish1.getName() << ": ";
	 		cin >> food;
	 		//feed the fish
	 		goldfish1.feedFish(food);
	 		//advance the day
	 		goldfish1.nextDay();

	 		//check if the fish is still alive
	 		if (goldfish1.isAlive()) {
	 			goldfish1.print();
	 		}else {
	 			// if the fish is dead then break the loop
	 			break;
	 		}

	}
	//print the dead fish
	 goldfish1.print();


	return 0; 

}