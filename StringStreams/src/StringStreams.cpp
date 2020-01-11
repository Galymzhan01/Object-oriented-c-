//============================================================================
// Name        : StringStreams.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
using namespace std;

int main() {
	string name = "Galymzhan";
	int age = 17;
	stringstream info;
	info << "Name is ";
	info << name;
	info << "; Age is ";
	info << age;
	cout << info.str() << endl;
	return 0;
}
