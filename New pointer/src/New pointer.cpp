//============================================================================
// Name        : New.cpp
// Author      : Galymzhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
using namespace std;
/*class Answer{
private:
	string name;
public:
	Answer(){
		cout << "Initialization..." << endl;
	}
	~Answer() {
		cout << "Quitting..." << endl;
	}
	void setName(string name) {
		this -> name = name;
	}
	void answerMe(){
		cout << "My name is " << name << endl;
	}
};

int main() {
	Answer *pAnswer = new Answer();
	pAnswer -> setName("Galymzhan");
	pAnswer -> answerMe();
	delete pAnswer;


	return 0;
} */
class Response {
private:
	string name;
	int age;
public:
	Response(){
		cout << "Initialization..." << endl;
	}
	~Response(){
		cout << "Quitting the system" << endl;
	}
	void setName(string name, int age) {
		this -> name = name;
		this -> age = age;
	}
	string sayThat() {
		stringstream info;
		info << "My name is ";
		info << name;
		info << "; My age is ";
		info << age;
		return info. str();
	}
};
int main(){
	/*Response *pointer = new Response();
	pointer -> setName("Galymzhan", 18);
	pointer -> sayThat();
	delete pointer;*/
	Response *pointer = new Response();
	pointer -> setName("Galymzhan", 18);
	pointer -> sayThat();
	delete pointer;
	/*person.setName("Galymzhan", 17);
	cout << person.sayThat() << endl;*/
	return 0;
}

