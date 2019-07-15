#include <iostream>

using namespace std;

int main()
{
	//cout << "Array of integers" << endl;
	//cout << "_________________" << endl;
	//int values[3];
	//values[0] = 88;
	//values[1] = 123;
	//values[2] = 7;
	//cout << values[0] << endl;
	//cout << values[1] << endl;
	//cout << values[2] << endl;

	//cout << endl << "Array of doubles" << endl;
	//cout << "________________" << endl;
	//double numbers[4] = {4.5, 2.3, 7.2, 8.1};
	//for (int i = 0; i < 4; i++) {
	//	cout << "Element at index " << i << ": " << numbers[i] << endl;
	//}

	//cout << endl << "Initializing with zero values" << endl;
	//cout << "________________" << endl;
	//int numberArray[8] = {};

	//for (int i = 0; i < 8; i++) {
	//	cout << "Element at index " << i << ": " << numberArray[i] << endl;
	//}

	////Array of strings
	//string texts[] = {"apple", "banana", "orange"};
	//for (int i = 0; i < 3; i++) {
	//	cout << "Element at index " << i << ": " << texts[i] << endl;
	//}

	//int multsOf12[13];
	//for (int i = 0; i < 13; i++) {
	//	multsOf12[i] = i * 12;
	//	cout << "12 times " << i << " is: " << multsOf12[i] << endl;
	//}

	// Multidemensional Arrays:

	string animals[2][3] = {
		{"Fox", "Dog", "Cat"},
		{"Mouse", "Squirrel", "Parrot"}
	};

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << animals[i][j] << " " << flush;
		}
		cout << endl;
	}

	int multTable[11][11];
	cout << endl << "Multiplication Table:" << endl;
	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 11; j++) {
			multTable[i][j] = i * j;
			cout << multTable[i][j] << " " << flush;
		}
		cout << endl;
	}


	return 0;
}
