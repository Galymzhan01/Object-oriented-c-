//============================================================================
// Name        : Reversing.cpp
// Author      : Galymzhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char text[] = "hello";
	int n = (sizeof(text) - 2);
	cout << n << endl;
	cout << text[n] << endl;
	return 0;
}
