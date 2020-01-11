#include <iostream>
using namespace std;

void herpes(int* number){
	cout << "In the address " << number << endl;
	cout << " the number " << *number << " used to live." << endl;
	*number = 78;
	cout << "In the address " << number << flush;
	cout << " now lives the number " << *number << endl;
}


int main(){
	int qValue = 77;
	int* oValue = &qValue;
	cout << "1. The initial integer is " << qValue << endl;
	cout << "2. Its address is " << oValue << endl;
	cout << "3. In the address " << oValue << " lives the number " << *oValue << endl;
	cout << "--------------" << endl;

	herpes(&qValue);



}
