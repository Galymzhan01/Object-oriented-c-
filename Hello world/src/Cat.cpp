/*
 * Cat.cpp
 *
 *  Created on: 23 дек. 2019 г.
 *      Author: Asus
 */

#include "Cat.h"
#include <iostream>
using namespace std;

void Cat::speak() {
	if(happy){
		cout << "Meouw" << endl;
} else {
	cout << "SSsh" << endl;
}
}
void Cat::makeHappy(){
	happy = true;
}
void Cat::makeSad(){
	happy = false;
}
