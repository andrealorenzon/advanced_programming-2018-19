/* Write a simple text formatter that breaks the lines longer 
than a given number of characters. This formatter does not break 
words and leaves unmodified the lines shorter than the given threshold. 
*/



#include <iostream>
#include <fstream>
#include <string>
#include <vector>
 
using namespace std;

/*
 Put the content of a text file in a vector.
 */
bool file_to_vec(string fileName, vector<string> & vecOfStrs)
{
 
	ifstream in(fileName.c_str());
	if (in.fail()) return false;
 
	string line;
	
	while (getline(in, line))
	{
		// Line contains string of length > 0 then save it in vector
		if(line.size() > 0)
			vecOfStrs.push_back(line);
	}
	//Close The File
	in.close();
	return true;
}

vector<string> linebreaker(string line, int n ){
	vector<string> words;
		//return vector of short lines
}


int main(int argc, char const *argv[]) {

	string file = argv[1];
	int maxLenght =  argv[2];
	vector<string> testo;
	if (file_to_vec(argv[1], testo)){
		

		//cout << testo[0] << " ok" << endl;
		//DEBUG OK

		for (auto lineindex = testo.begin(); lineindex != testo.end(); ++lineindex) {
			/***use linebreaker() here***/
		}



	}
	else {
		cout << "File not found." << endl;
		return 1;
	}



	
	return 0;
}
