/*
 * Dog.cpp
 *
 *  Created on: 24 дек. 2019 г.
 *      Author: Asus
 */

#include "Dog.h"

Dog::Dog() {
	name = "Rex";
}

string Dog::toString(){
	return "The name of my dog is " + name;
}

void Dog::setNewname(string newName){
	name = newName;
}

string Dog::getName(){
	return name;
}


