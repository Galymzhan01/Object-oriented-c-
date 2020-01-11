/*
 * Person.cpp
 *
 *  Created on: 24 дек. 2019 г.
 *      Author: Asus
 */

#include "Person.h"

Person::Person() {
	name = "Adilet";

}

string Person::hisName(){
	return "The name of my best friend is " + name;
}
