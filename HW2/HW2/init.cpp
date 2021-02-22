// init.cpp
// Rose Peters
// 02-20-2021
// 
// For CS372
// Testing out init for if/switch

#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

int main() {

	if (string word = "Hello"; word.substr(0, 5) == "Hello")
		std::cout << "Hello World" << endl;

	switch (int i = 20; i) {
	default: cout << i;
	}
}