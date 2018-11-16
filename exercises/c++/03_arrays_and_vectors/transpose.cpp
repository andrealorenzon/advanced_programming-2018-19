#include <iostream>
using namespace std;


int main()
{
	
	int m = 3;
	int n = 3;

	int *matr = new int[m*n];

	for (int i = 0; i < m*n; i++)
	{
		*matr[i] = i;
	}

	for (int i = 0; i < (n*m); i++)
	{
		cout << &matr[i] << endl;
	}

	return 0;
}
