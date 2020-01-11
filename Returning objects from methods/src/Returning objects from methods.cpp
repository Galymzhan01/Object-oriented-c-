//============================================================================
// Name        : Returning.cpp
// Author      : Galymzhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Name {
private:
	string name;
public:
	Name(){
		cout << "Initialization" << endl;
	}
	~Name(){
		cout << "Quitting" << endl;
	}
	void setName(string name){
		this->name = name;
	}
	void speak(){
		cout << "My name is " << name << endl;
	}
};

Name *function() {
	Name *gerber = new Name();
	gerber-> setName("Galymzhan");
	return gerber;
}

int main() {
	Name *function2 = function();
	function2 -> speak();
	delete function2;
	return 0;
}
