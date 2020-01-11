//============================================================================
// Name        : Pointers.cpp
// Author      : Galymzhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int size = 5;
	string array[size] = {"one", "two", "three", "four", "five"};
	string *pArray = array;
	string *pEnd = &array[size];
	 while(pArray != pEnd){
		 cout << *pArray << " " << flush;
		pArray++;
		 if(pArray == &array[2]){
				 			continue;
			 		}
	}


	return 0;
}
