/*
 * Person.h
 *
 *  Created on: 25 дек. 2019 г.
 *      Author: Asus
 */

#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person();
	Person(string name, int age);
	string ageName();
};

#endif /* PERSON_H_ */
