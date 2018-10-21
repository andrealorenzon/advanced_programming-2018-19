#include <iostream>
#include <string>
#include <cstdlib>
using namespace std ;


string unit_conversion(double qty, string unit){

/* UNIT OF MEASURE UNDERSTANDING

I could have used a function to convert string to int's and use a switch/case anyway, 
but given the "KISS" phylosophy I'll just use a cascade of it/then/else.
*/

	string mksunit = "...hey, you have to give me a number and a unit!";

// TO METERS

	if 
		(
			(unit.compare("inch")==0) 	||
			(unit.compare("inches")==0) ||
			(unit.compare("inches")==0) ||
			(unit.compare("in")==0) 	
	    )
		{
			mksunit = "m";
			qty = qty * 25.14 / 1000;
			string converted = to_string(qty) + " " + mksunit;
			return converted;
		}

	if 
		(
			(unit.compare("foot")==0) 	||
			(unit.compare("feet")==0) 	||
			(unit.compare("ft")==0)
	    )
		{
			mksunit = "m";
			qty = qty * 0.3048;
			string converted = to_string(qty) + " " + mksunit;
			return converted;
		}

	if 
		(
			(unit.compare("yard")==0) 	||
			(unit.compare("yards")==0) 	||
			(unit.compare("yd")==0)		
	    )
		{
			mksunit = "m";
			qty = qty * 0.9144;
			string converted = to_string(qty) + " " + mksunit;
			return converted;
		}

	if 
		(
			(unit.compare("mile")==0) 	||
			(unit.compare("mi")==0) 	||
			(unit.compare("miles")==0)		||
			(unit.compare("statute miles")==0)
	    )
		{
			mksunit = "m";
			qty = qty * 1609.3;
			string converted = to_string(qty) + " " + mksunit;
			return converted;
		}

	if 
		(
			(unit.compare("nautical miles")==0) 	||
			(unit.compare("nautical mile")==0)
	    )
		{
			mksunit = "m";
			qty = qty * 1852;
			string converted = to_string(qty) + " " + mksunit;
			return converted;
		}

	if 
		(
			(unit.compare("acre")==0) 	||
			(unit.compare("acres")==0)
	    )
		{
			mksunit = "m²";
			qty = qty * 0.40469 * 100000;
			string converted = to_string(qty) + " " + mksunit;
			return converted;
		}

// TO KILOGRAMS

		if 
		(
			(unit.compare("grain")==0) 	||
			(unit.compare("grains")==0) 
	    )
		{
			mksunit = "Kg";
			qty = qty * 0.000065;
			string converted = to_string(qty) + " " + mksunit;
			return converted;
		}

		if 
		(
			(unit.compare("dram")==0) 	||
			(unit.compare("drams")==0) 
	    )
		{
			mksunit = "Kg";
			qty = qty * 0.00172;
			string converted = to_string(qty) + " " + mksunit;
			return converted;
		}


		if 
		(
			(unit.compare("ounce")==0) 	||
			(unit.compare("ounces")==0) 
	    )
		{
			mksunit = "Kg";
			qty = qty * 0.02835;
			string converted = to_string(qty) + " " + mksunit;
			return converted;
		}


		if 
		(
			(unit.compare("pound")==0) 	||
			(unit.compare("pounds")==0) 
	    )
		{
			mksunit = "Kg";
			qty = qty * 0.45359237;
			string converted = to_string(qty) + " " + mksunit;
			return converted;
		}


		if 
		(
			(unit.compare("stone")==0) 	||
			(unit.compare("stones")==0) 
	    )
		{
			mksunit = "Kg";
			qty = qty * 6.35;
			string converted = to_string(qty) + " " + mksunit;
			return converted;
		}


		if 
		(
			(unit.compare("long ton")==0) 	||
			(unit.compare("long tons")==0) 
	    )
		{
			mksunit = "Kg";
			qty = qty * 1016;
			string converted = to_string(qty) + " " + mksunit;
			return converted;
		}

// TO CUBIC METERS

		
		if 
		(
			(unit.compare("fl.oz.")==0) 	||
			(unit.compare("fl. oz.")==0) 	||
			(unit.compare("fluid oz.")==0) 
	    )
		{
			mksunit = "m³";
			qty = qty * 29.57 / 1000000;
			string converted = to_string(qty) + " " + mksunit;
			return converted;
		}	

		if 
		(
			(unit.compare("pint")==0) 	||
			(unit.compare("pints")==0) 
	    )
		{
			mksunit = "m³";
			qty = qty * 473.18 / 1000000;
			string converted = to_string(qty) + " " + mksunit;
			return converted;
		}	

		if 
		(
			(unit.compare("gallon")==0) 	||
			(unit.compare("gallons")==0) 
	    )
		{
			mksunit = "cubic m";
			qty = qty * 4.546 / 1000;
			string converted = to_string(qty) + " " + mksunit;
			return converted;
		}

		if 
		(
			(unit.compare("°F")==0) 	||
			(unit.compare("F")==0)		||
			(unit.compare("Fahrenheit")==0)||
			(unit.compare("° Fahrenheit")==0)
	    )
		{
			mksunit = "K";
			qty = (qty - 32) * 5/9 + 273.15;
			string converted = to_string(qty) + " " + mksunit;
			return converted;
		}

		return mksunit;
}



int main(int argc, char const *argv[])
{
	//input verification

	if (argc != 3) {
		cout << "Incorrect number of parameters! > "<< argc-1 << endl;
		return 1;
	}

	
	double qty = stod(argv[1]);
	string unit = argv[2];
	string mksunit = "";

	cout << qty << " " << unit << endl;
	cout << " = " << endl;
	cout << unit_conversion(qty, unit) << endl;


	return 0;
}