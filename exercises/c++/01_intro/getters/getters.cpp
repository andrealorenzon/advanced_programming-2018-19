#include <iostream>
using namespace std;

//BUG OR FEATURE??

/*
	If after the required input, additional characters are given, they are ignored.
	This automatically floor()'s input, if you require an int.
	i.e.:
	 400xxx becomes 400.
	 11.11.11.11 becomes 11 (int) or 11.11 (double)

	I decided to keep this feature, considering it useful.

	This could be eliminated by character parsing:

		1) read cin as a string
		2) parse characters: 
				a) if all characters are digits, it's an int. Ignore initial 0's.
				b) if all characters are digit but one, that is a dot, and the dot is not in
				the last position, it is a float. 
		3) cast the string in the required type

*/


int get_int() { //reads from stdin until a valid int is entered
	cout << "enter a valid int (or a number that can be rounded down to an int):" << endl;
	int i;
	while(!(cin >> i)) {
		cout << "retry. enter a valid int: " << endl;
		cin.clear();
		cin.ignore(10000, '\n');

	}
	cout << "Ok, " << i << " is a valid int." << endl;
	return 0;
}

int get_double() {                        //reads from stdin until a valid int is entered
	cout << "enter a valid double:" << endl;
	double d;
	while(!(cin >> d)) {
		cout << "retry. enter a valid double: " << endl;
		cin.clear();
		cin.ignore(10000, '\n');

	}
	cout << "Ok, "<< d << " is a valid double." << endl;

	return 0;
}

int main(int argc, char const *argv[])
{
	cout << "first enter a valid int, then a valid double.\n" << endl;
	get_int();
	cin.ignore(10000, '\n');
	get_double();
	return 0;
}