// Project 3.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <fstream>
#include <map> // map function
#include "GroceryItem.h" // GroceryItem header.

using namespace std;

int main() {
	GroceryItem tracker;
	tracker.readDataFromFile("Inventory.txt"); // calling the read from file funtion to read from Inventory.txt

	int choice; // menu starting
	while (true) {
		cout << "Menu:" << endl;
		cout << "1. Look up item frequency" << endl;
		cout << "2. Print item frequency" << endl;
		cout << "3. Print item in histogram" << endl;
		cout << "4. Exit" << endl;
		cout << "Please make a selection";
		cin >> choice; // user input

		if (choice == 1) {
			string item;
			cout << "Enter the item: ";
			cin >> item;
			cout << "Frenquency: " << tracker.getItemFrequency(item) << endl; // choice 1 with frequency checker
		}
		else if (choice == 2) {
			tracker.printItemFrequencies(); // choice 2 to display item freq
		}
		else if (choice == 3) {
			tracker.printItemHistogram(); // choice 3 to display histogram
		}
		else if (choice == 4) { // exit the program
			break;
		}
		else {
			cout << "Invalid entry, please select again." << endl;
		}
	}

	return 0;
}