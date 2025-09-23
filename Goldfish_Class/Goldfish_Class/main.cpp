#include<iostream>
#include"goldFish.h"
#include<string>

using namespace std;

int main(int argc, char * argv[]) {

	/*goldfish goldfish1("goldie");
	
	goldfish1.feedFish(0.1);
	goldfish1.feedFish(0.2);
	goldfish1.feedFish(0.5);
	goldfish1.print();

	goldfish1.nextDay();
	goldfish1.print();

	goldfish1.changeName("Destruction");
	goldfish1.feedFish(0.9);
	goldfish1.print();
	goldfish1.feedFish(1.2);*/

	int option = 1;
	char choice; 

	goldfish goldfish1; 
	string name; 
	double food;



	cout << "Name your gold fish: ";
	
	getline(cin, name);
	goldfish1.setName(name);

	do {
		
		cout << "How many grams you want to feed the fish?: ";
		cin >> food; 
		goldfish1.setFoodEaten(food);
		goldfish1.print();
		goldfish1.nextDay();

	} while (true);

	return 0; 

}