#include <iostream>
#include <vector>
#include <string>

//using namespace std;          //commented for good practice

int main(int argc, char const *argv[])
{
	
//variables declaration

	std::string line;
	std::vector<std::string> text;
	std::string stop {"[EOF]"};    // set to a different value if your text can contains "[EOF]"

//input reading: parse multiple line input from console, stores the lines as strings in
//a string vector.

	std::cout << "Enter the text (or type '[EOF]' to end): \n\n" << std::endl;
	while(getline(std::cin, line)) {

		if (line == stop) {

			break;
		}


		text.push_back(line);

	}

// uniq-uifying and printing vector

	int rep = 1;								 // init repetition counter

	for(int it = 0; it < text.size(); it++){     // for cycle to parse the vector
												 // for every line...
		if (text[it+1].compare(text[it])==0)		 // if the next is the same..
			rep+=1;								 // just increase the repetition counter.
		else 
			{
				std::cout << rep << " * " << text[it] << std::endl; //otherwise print "repetitions * line"
				rep = 1;						 // and reset counter.
			}

	}	

	return 0;
}