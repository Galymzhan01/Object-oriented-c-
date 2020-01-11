//============================================================================
// Name        : This2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
//#include "Person.h"
#include "Person2.h"
using namespace std;

int main() {
	/*Person pegas;
	cout << pegas.ageName() << endl;*/
	Person2 person2;
	Person2 pegas("Galymzhan", 18);
	cout << person2.value() << endl;
	cout << pegas.value() << endl;
	return 0;
}
