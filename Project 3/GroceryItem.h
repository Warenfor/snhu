#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class GroceryItem {
private:
	map<string, int> itemFrequency; // Map to store item frequency

public:

	void readDataFromFile(const string& Inventory) {
		ifstream inputFile(Inventory);
		string item;

		while (inputFile >> item) {
			itemFrequency[item]++;  // Increment frequency count for item.
		}

		inputFile.close();
	}

	int getItemFrequency(const string& item) { // get specified item freq
		return itemFrequency[item];
	}

	void printItemFrequencies() { // print all item freq
		for (const auto& entry : itemFrequency) {
			cout << entry.first << ":" << entry.second << endl;
		}
	}

	void printItemHistogram() { // histogram display of frequencies
		for (const auto& entry : itemFrequency) {
			cout << entry.first << " ";
			for (int i = 0; i < entry.second; ++i) {
				cout << "*";
            }
			cout << endl;
		}
	}

};

