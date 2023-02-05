#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
using namespace std;
class characterPositions
{
	int main() {
		char userInput;
		string fileInput;
		fstream inputFile;
		int charCount;
		int indexCount;
		int k;
		inputFile.open("input.txt");
		if (!inputFile.is_open()) {
			cout << "EXIT_FAILURE!" << endl;
			return 1;
		}
		inputFile >> fileInput;
		int* indexArray = new int[fileInput.length()];
		cout << "Enter the character to sear for:";
		cin >> userInput;

		for (int i = 0; i < fileInput.length(); i++) {
			indexCount++;
			if (userInput == fileInput[i]) {
				charCount++;
				indexArray[k] = indexCount;
				k++;
			}
		}
		cout << "\nThe number of occurrences of the character " << userInput << "is " << charCount << "\n";
		if (charCount != 0) {
			cout << "The indicies of the character positions are";
			for (int j = 0; j < k; j++) {
				cout << " " << indexArray[j];
			}
		}
		delete[] indexArray;
	}
};