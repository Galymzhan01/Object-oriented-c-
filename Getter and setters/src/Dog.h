/*
 * Dog.h
 *
 *  Created on: 24 дек. 2019 г.
 *      Author: Asus
 */

#ifndef DOG_H_
#define DOG_H_
#include <iostream>
using namespace std;

class Dog {
private:
	string name;
public:
	Dog();
	string toString();
	void setNewname(string newName);
	string getName();
};

#endif /* DOG_H_ */
