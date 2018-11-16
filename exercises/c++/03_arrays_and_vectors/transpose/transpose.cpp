#include <iostream>
#include<array>
#include<iomanip>  // setprecision(), for pretty display

using namespace std;

// given an input and an output arrays of the same size, compute the transpose
// can compute square matrix up to 723 x 723 elements, then segfaults


void transpose(double *input, double *output, const int N, const int M) {
	
	for (auto i = 0; i < N*M; i++){
		int r = i/N;
		int c = i%N;
		output[i] = input[M*c +r];
	}
    
}


// fRand shamefully stolen from 
// https://stackoverflow.com/questions/2704521/generate-random-double-numbers-in-c

double fRand(double fMin, double fMax)
{
    double f = (double)rand() / RAND_MAX;
    return fMin + f * (fMax - fMin);
}



int main(int argc, char const *argv[])
{

	// first argv is nrow, second is ncol

		int nrow = stoi(argv[1]);
		int ncol = stoi(argv[2]);
		const int size = nrow*ncol;
		cout << "array of " <<nrow << "*" << ncol << endl;

//random populating the matrix

		double matr [size] {};
		for (auto k = 0; k < size; k++) {
			matr[k] = fRand(-10,10);

		}
// initializing the output matrix
		double result[size]{};


//show the array, diving it by rows

	for (auto cnt = 0; cnt < size; cnt ++) {
		cout << setprecision(3) << matr[cnt] << "\t";
		if ((cnt+1)%ncol==0) { cout << endl;}
	}
	cout << endl;

// transpose 
		
	transpose(matr, result, nrow, ncol);


//show the array, diving it by rows

	for (auto cnt = 0; cnt < size; cnt ++) {
		cout << setprecision(3) <<  result[cnt] << "\t";
		if ((cnt+1)%nrow==0) { cout << endl;}
	}
	cout << endl;

	return 0;
}