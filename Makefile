# Simple Makefile to compile, clean and format all the sample codes
# provided during the course of Advanced Programming
CXX = g++
CXXFLAGS = -Wall -Wextra  -std=c++11 -O3  # warning verbose, always read the warning. c++14 perchè usiamo auto 

SRC =linkedlists.cc
EXE = $(SRC:.cc=.x)              # same name, but .x

.PHONY: clean default
	
default: $(EXE)

%.x:%.cc
	$(CXX) $(CXXFLAGS)  $< -o $@


clean:
	rm -rf *~ $(EXE) 			# occhio agli spazi

# $< = all dependencies
# $@ = the file itself