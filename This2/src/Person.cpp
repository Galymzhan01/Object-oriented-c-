/*
 * Person.cpp
 *
 *  Created on: 25 дек. 2019 г.
 *      Author: Asus
 */

#include "Person.h"
#include <sstream>

Person::Person() {
	name = "undefined";
	age = 0;
}
Person::Person(string name, int age){
	this -> name = name;
	this -> age = age;
}

string Person::ageName(){
	stringstream ss;
	ss << "Name is ";
	ss << name;
	ss << "; Age is ";
	ss << age;
	return ss.str();
}

