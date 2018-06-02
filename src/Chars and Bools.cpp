//============================================================================
// Name        : Chars.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
//bool values are either true or false, 1 is true and 0 is false
	bool bValue = false;
	cout << bValue << endl;

//char values take their value from the Ascii table, which links certain characters to
// one byte of info and represent 255 characters available
// American Standard Code for Information Interchange
	char cValue = 55;
	cout << cValue << endl;

//if you want to directly access the character in the definition, use single quotes
	char cValue2 = '9';
	cout << cValue2 << endl;

//if you want to see the integer value of the character that has been defined, use (int)
	cout << (int)cValue2 << endl;

	char cValue3 = 119;
	int apples = 22;
	int bananas = 23;

	cout << cValue3 << endl;

//char is only 1 byte of information possible, so 256 possibilities
	cout << "Size of char: " << sizeof(char) << endl;

//wchar_t uses 4 bytes of info, if needed, but for some reason if you want to read it
//you have to use (char) before displaying it. Not used often
	wchar_t wValue = 'L';
	cout << wValue << endl;
	cout << (char)wValue << endl;

//it seems that the compiler cannot handle extended Ascii values
// they do not display properly
	char cValue4 = 224;
	cout << cValue4 << endl;
	return 0;
}
