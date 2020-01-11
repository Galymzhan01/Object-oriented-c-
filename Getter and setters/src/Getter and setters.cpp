//============================================================================
// Name        : Getter.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Dog.h"
using namespace std;
int main() {
	Dog dog;
	dog.setNewname("Baster");
	cout << dog.toString() << endl;
	cout << "The name of the dog with getmethod is " << dog.getName() << endl;
	return 0;
}
