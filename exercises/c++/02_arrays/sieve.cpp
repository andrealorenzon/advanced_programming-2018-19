#include <iostream>
#include <string>
//#include <array>

using namespace std;

template <class T>  // template function declarations
class EArray
{
	private:
		T* array;   // pointer to an array of type T
		int size;	// size of the array
	public:
		EArray(int l); // constructor class
		~EArray();     // destructor class


		void push(const T & newval); 			// insert newval as array[max_i+1]
		void output();							// print array elements
		void tuptou();
		void remove(int i);							// print array elements in reversed order

};

// EArray methods:

template<class T>                  // constructor
EArray<T>::EArray(int l)
{
	size = l;
	array = new T[size];
}

template<class T>					// destructor
EArray<T>::~EArray()
{
	delete [] array;
	array = NULL;  // good practice

}

template<class T>
void EArray<T>::push(const T & newval)  // append an element
{
	size +=1;
	T* newarray = new T[size];
	for (int i =0; i < size; i++) 
	{
		newarray[i] = array[i];
	}
	delete[] array;
	newarray[size-1] = newval;
	array = newarray;
}

template<class T>
void EArray<T>::output()  // normal output
{
	for (int i = 0; i < size; i++)
	 {
	 	cout << array[i] << " ";
	 } 
	cout << endl;
}

template<class T>
void EArray<T>::tuptou()   // reversed output
{
	for (int i = size-1; i >= 0; i--)
	 {
	 	cout << array[i] << " ";
	 } 
	cout << endl;
}

template<class T>
void EArray<T>::remove() {

	
}

bool isprime(int n) {

	bool isPrime = true;

	for(int i = 2; i <= n / 2; ++i)
	{
	    if(n % i == 0)
	    {
	        isPrime = false;
	        break;
	    }
	}
	return isPrime;


}

int main(int argc, char const *argv[])
{
	
//test  PASSED!
/*
	EArray <float> array(0);

	array.push(9.5);
	array.output();
	cout << "----------" << endl;
	array.push(1.5);
	array.output();
	cout << "----------" << endl;
	array.push(6.5);
	array.output();
	cout << "----------" << endl;
	array.push(8.5);
	array.output();
	cout << "----------" << endl;
	array.tuptou();
	cout << "----------" << endl;

	EArray <float> array2(0);

	array2.push(9);
	array2.output();
	cout << "----------" << endl;
	array2.push(1);
	array2.output();
	cout << "----------" << endl;
	array2.push(6);
	array2.output();
	cout << "----------" << endl;
	array2.push(8);
	array.output();
	cout << "----------" << endl;
	array2.tuptou();
	cout << "----------" << endl;
*/
// fine test
	int n;
	
	cout << "Enter a number, I will tell you all primes up to that number: " << endl;
	cout << "\n >> " ;
	cin >> n;

	EArray<int> array(0); // fix that to work dinamically between types

	for (int i = 0; i <= n; i++)
	{
		array.push(i);
	}
//	array.output();
	

	

	return 0;
}