#include <iostream>
#include <iomanip>
#include <typeinfo>

using std::cout;
using std::endl;
using std::setw;

template < typename T > class array {
private:
	int size;
	T *myarray;
public:


// constructor with user pre-defined size
	
	array (int s) {
		size = s;
		myarray = new T [size];
	}


// class array member function to set element of myarray 
// with type T values

void setArray ( int elem, T val) {
	myarray[elem] = val;
	}


// for loop to display all elements of an array

void getArray () {
     for ( int j = 0; j < size; j++ ) {


// typeid will retriev a type for each value
        cout << setw( 7 ) << j << setw( 13 ) << myarray[ j ] 
<< " type: " << typeid(myarray[ j ]).name() << endl;
	}
	cout << "-----------------------------" << endl;
	}
};

int main() 
{
	// instantiate int_array object of class array<int> with size 2
	array< int > int_array(2);

	// set value to a first element
	// call to array class member function to set array elements
	int_array.setArray(0,3);

	// set value to a second element
	// NOTE: any attempt to set float to an int array will be translated to int value
	int_array.setArray(1,3.4);

	// call to array class member function to display array elements
	int_array.getArray();

	// instantiate float_array object of class array<float> with size 3
	array< float > float_array(3);

	// set value to a first element
	// call to array class member function to set array elements
	float_array.setArray(0,3.4);
	
	// set value to a second element
	float_array.setArray(1,2.8);

	// call to array class member function to display array elements
	float_array.getArray();

	// instantiate float_array object of class array<char> with size 5
	array< char > char_array(5);

	// set value to a first element
	// call to array class member function to set array elements
	char_array.setArray(0,'H');
	// set value to a other array elements
	char_array.setArray(1,'E');
	char_array.setArray(2,'L');
	char_array.setArray(3,'L');
	char_array.setArray(4,'O');

	char_array.getArray();

	return 0;
}