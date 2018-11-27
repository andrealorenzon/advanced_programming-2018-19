#include <iostream>
//#include <vector>
#include "Date.h"


//! Implementation of the Date class.
/*!
\parameter dd Day of the month
\parameter mm Month of the year
\parameter yy Year

\bug enum use for month to be fixed. Had to implement a lookup method that could be avoided.

*/

//! lookup vector for Months
std::vector<string> MonthsLookup {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

//! Month lenght, in days, for add_days()
std::vector<int>days {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 31,};


Date::Date() {
        dd = yy = 1;
        mm = Jan;
    };

Date::Date(int dd, Months mm, int yy) { /*!< Constructor, invoked e-.g. by Date d{21,Feb,2019} */
        this->dd = dd;
        this->mm = mm;
        this->yy = yy;

    };

Date::~Date() = default;


    //! getter of day
int Date::day() {
    	return dd;
    }
    //! getter of month: to be rewritten later using enum
string Date::month() {    /*!< can't get enums, only int values. Created a lookup array.  EDIT: can be fixed with static_casting */ 
    					
   		return MonthsLookup[mm-1];
    }
    //! getter of year
int Date::year() {
    	return yy;
    }

    //!< Prints the date in standard output, using numbers for the month
void Date::print() {   
     	cout << this->day() << "/"<< mm << "/" << this->year() << endl;
    }

    //!< Prints the date in standard output, using 3 characters for the month
void Date::litprint() { 
    	cout << this->day() << "/" << this->month() <<"/"<< this->year() << endl;
    }

    //!< add n days to a date, taking in to accout new months
void Date::add_days(int n) { 
    	
    	while (n>0){
    		dd += 1;
    		if (dd > days[mm-1]) {
    						// next month
    			dd = 1;
    			if (mm != 12) {
	    			mm = Months(mm+1);  //cast int in Months
	    		}
	    		else if (mm == 12) {
	    			mm = Jan;
	    			yy ++;
	    		}

    		};
    		n--;
    	}
    };

//--------------------------------------------------------------------