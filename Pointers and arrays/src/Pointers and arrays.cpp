//============================================================================
// Name        : Pointers.cpp
// Author      : Galymzhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string array[] = {"Gala", "Galymzhan", "Galym"};
	string* pArray = array;

	for(int i = 0; i < sizeof(array)/sizeof(string); i++){
		cout << pArray[i] << " " << flush;
	}

	cout << endl;

	for(int i = 0; i < sizeof(array)/sizeof(string);  i++, pArray++){
		cout << *pArray << " " << flush;
	}

	cout << endl;

	string *pInitial = &array[0];
	string *pFinal = &array[2];

	while(true){
		cout << *pInitial << " " << flush;
		if(pInitial == pFinal){
			break;
		}
		pInitial++;
	}
	return 0;
}
