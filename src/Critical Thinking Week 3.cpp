//============================================================================
// Name        : Critical.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	int c;

	int *aPtr = new int;
	int *bPtr = new int;
	int *cPtr = new int;

	cout << "Please Enter The First Number: " << endl;
	cin >> a;

	cout << "Please Enter The Second Number: " << endl;
	cin >> b;

	cout << "Please Enter The Third Number: " << endl;
	cin >> c;

	aPtr = &a;
	bPtr = &b;
	cPtr = &c;

	cout << "Number:" << a << " Memory Location:" << aPtr << endl;
	cout << "Number:" << b << " Memory Location:" << bPtr << endl;
	cout << "Number:" << c << " Memory Location:" << cPtr << endl;

	delete aPtr;
	delete bPtr;
	delete cPtr;

	return 0;
}
