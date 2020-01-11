//============================================================================
// Name        : Referencing.cpp
// Author      : Galymzhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void pegas(int &value){
	value = 99;
}
int main() {
	int item = 7;
	int &san = item;
	san = 69;
	cout << item << endl;
	cout << "Now time for function:" << endl;
	int sony = 55;
	cout << "Initial value is 55" << endl;
	pegas(sony);
	cout << "Now it is infected. THe value is " << sony << endl;
	return 0;
}
