/*
 * Learnin' about return
 */

#include <iostream>
using namespace std;


// This is flawed and doesn't run more than once but who cares.

void showMenu() {
	cout << "1. Search" << endl;
	cout << "2. View Record" << endl;
	cout << "3. Quit" << endl << endl;
}

int select() {
	cout << "Enter selection: " << flush;

	int input;
	cin >> input;

	return input;
}

int main() {

	showMenu();

	int input = select();

	switch (input) {
		case 1:
			cout << "Searching..." << endl;
			break;
		case 2:
			cout << "Viewing record..." << endl;
			break;
		case 3:
			cout << "Quitting..." << endl;
			break;
		default:
			cout << "Please select an item from the menu." << endl;
		}

	return 0;
}