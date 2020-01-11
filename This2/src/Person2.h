/*
 * Person2.h
 *
 *  Created on: 25 дек. 2019 г.
 *      Author: Asus
 */

#ifndef PERSON2_H_
#define PERSON2_H_
#include <iostream>
using namespace std;

class Person2 {
private:
	string name;
	int age;
public:
	Person2();
	Person2(string name, int age);
	string value();
};

#endif /* PERSON2_H_ */
