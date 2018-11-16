
#include<iostream>
#include<vector>
#include "Date.h"
using namespace std;

/*!
\mainpage Implementation of the Date class.

\subsection Specifications:

has three private attributes to represent day, month and year
use a scoped enum for month
it has the following public functions:

    it has a constructor that takes as arguments a day, a month and a year. (Forget about the validation for now)
    it has a day() function that returns the day
    it has a month() function that returns the month
    it has a year() function that returns the year
    it has a function add_days(const unsigned int n) which adds n days. You have to take care to increment months and years accordingly (neglect leap years)



*/


/*! \brief Main: testing the implemented class



*/

int main()
{
	Date d {26,Feb,2018};  /*!<  test constructor*/
	Date p;

	d.print();				/*!< test getters */
	d.litprint();           /*!< test getters */
	p.print();				/*!< test getters */
	p.litprint();			/*!< test getters */

	cout << d.day() << endl;    /**< test direct methods */
	cout << d.month() << endl;
	cout << d.year() << endl;

	for (int added = 1; added < 20; added++) {  
		d.add_days(4);					/*!< test add_days*/
		d.litprint();
	}

	return 0;
}