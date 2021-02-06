//Rose Peters
//Jacob Jakiemiec
//Assignment 2
//StringCalculator.cpp

#include "StringCalculator.hpp"
#include <string>
using std::string;
#include <iostream>
#include <vector>
using std::vector;

//stringCalculator
//takes a string as an argument
//returns the sum of the numbers inside the string
int stringCalculator(string equation) {
	int index = 0;
	int sum = 0;
	vector<string> terms(3, "");
	vector<int> nums(3, 0);
	//parse the input string into terms
	for (char c : equation) {
		if (c == '-') return 0;

		if (c == ',' || c == '\n')
			index++;
		else
			terms[index] += c;


	}

	//convert the terms into numbers
	for (int i = 0; i < 3; i++) {
		if (terms[i] != "")
			nums[i] = std::stoi(terms[i]);
	}

	//sum up the terms
	for (int i : nums)
		sum += i;
	if (sum > 1000) return 0; // catch large numbers
	return sum;
}