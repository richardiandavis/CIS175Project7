// Rich Davis
// Project 7
// 9/23/2022

#include <iostream>
using namespace std;

int main() {
	int pennies;
	int nickels;
	int dimes;
	int quarters;

	cout << "Change counting game!\n\nEnter a number of pennies: ";
	cin >> pennies;
	cout << "Now enter a number of nickels: ";
	cin >> nickels;
	nickels = nickels * 5;
	cout << "Now enter a number of dimes: ";
	cin >> dimes;
	dimes = dimes * 5;
	cout << "Now enter a number of quarters: ";
	cin >> quarters;
	quarters = quarters * 25;

	if (pennies + nickels + dimes + quarters == 100) {
		cout << "Congratulations! You won the game.";
	}
	else {
		cout << "Total amount entered: " << pennies + nickels + dimes + quarters;
	}

	return 0;
}
