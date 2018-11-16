#include<iostream>
#include<vector>
using namespace std;


// enum months
enum Months {Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
vector<string> MonthsLookup {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
vector<int>days {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 31,};
//------------------------- class Date -------------------------------------
class Date {

private:   // ---------------------- private attributes -------------------
	int dd;
	Months mm;
	int yy;

public: // ---------------------- public methods ------------------------------
   	    // ---------------------- constructors /desctructor -------------------
    Date() {
        dd = yy = 1;
        mm = Jan;
    }
    Date(int dd, Months mm, int yy) {
        this->dd = dd;
        this->mm = mm;
        this->yy = yy;

    };
    	// ---------------------- getter methods -------------------
    int day() {
    	return dd;
    }
    
    string month() {    // can't get enums, only int values. 
    					// Created a lookup array for a quick-and-dirty solution.
   		return MonthsLookup[mm-1];
    }

    int year() {
    	return yy;
    }

    void print() {  
     	cout << this->day() << "/"<< mm << "/" << this->year() << endl;
    }

    void litprint() {
    	cout << this->day() << "/" << this->month() <<"/"<< this->year() << endl;
    }

    void add_days(int n) {
    	
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
    }
};
//--------------------------------------------------------------------


int main()
{
	Date d {26,Feb,2018};  // test constructor
	Date p;

	d.print();				//
	d.litprint();           ///// test getters
	p.print();				//
	p.litprint();			//

	cout << d.day() << endl;    //test direct methods
	cout << d.month() << endl;
	cout << d.year() << endl;

	for (int added = 1; added < 20; added++) {
		d.add_days(4);
		d.litprint();
	}

	return 0;
}