/*
 * Person2.cpp
 *
 *  Created on: 25 дек. 2019 г.
 *      Author: Asus
 */

#include "Person2.h"
#include <sstream>

Person2::Person2(): name("undefined"), age(0) {

}
Person2::Person2(string name, int age): name(name), age(age){

}

string Person2::value(){
	stringstream sth;
	sth << "Name is ";
	sth << name;
	sth << "; Age is ";
	sth << age;
	return sth.str();
}
