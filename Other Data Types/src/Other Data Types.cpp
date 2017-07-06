//============================================================================
// Name        : Other.cpp
// Author      : Ben Hardin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	bool bValue = true;
	cout << bValue << endl;

	char cValue = 'g';
	cout << (int)cValue << endl;
	cout << "Size of char: " << sizeof(char) << endl;

	wchar_t wValue = 't';
	cout << (char)wValue << endl;
	cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;

	return 0;
}
