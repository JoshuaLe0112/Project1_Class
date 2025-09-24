#include<iostream>
#include"goldFish.h"
#include<string>

using namespace std;

int main(int argc, char * argv[]) {

	string name;
	double food;
	int userOption;
	cout <<"Enter your gold fish name: ";
	getline(cin, name);
	goldfish goldfish1(name);

	while (goldfish1.isAlive()) {

			cout <<"How many grams of food do you want to feed " <<goldfish1.getName() << ": ";
			cin >> food;
			goldfish1.feedFish(food);
			goldfish1.print();
			goldfish1.nextDay();

			if (!goldfish1.isAlive()) {
				goldfish1.print();
				break;
			}

	}





	return 0; 

}