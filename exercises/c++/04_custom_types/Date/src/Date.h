#include <vector>
#include <iostream>
using namespace std;

//\enum available Months
enum Months {Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};



class Date {

	int dd;
	Months mm;
	int yy;

public:

	Date();
	Date(int dd, Months mm, int yy);
	~Date();

	int day();
	string month();
	int year();

    void print();
    void litprint();

    void add_days(int n);
};
