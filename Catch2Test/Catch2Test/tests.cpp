//Rose Peters
//Jacob Jakiemiec
//Assignment 2
//TestCases.cpp

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "StringCalculator.hpp"

TEST_CASE("An empty string returns 0") {
	REQUIRE(stringCalculator("") == 0);
}
TEST_CASE("A single number returns the value") {
	REQUIRE(stringCalculator("1") == 1);
	REQUIRE(stringCalculator("5") == 5);
}
TEST_CASE("Two numbers, comma delimited, returns the sum") {
	REQUIRE(stringCalculator("1,10") == 11);
	REQUIRE(stringCalculator("3,2") == 5);
}
TEST_CASE("Two numbers, newline delimited, returns the sum") {
	REQUIRE(stringCalculator("1\n2") == 3);
	REQUIRE(stringCalculator("4\n5") == 9);
}
TEST_CASE("Three numbers, delimited either way, returns the sum") {
	REQUIRE(stringCalculator("1,2,3") == 6);
	REQUIRE(stringCalculator("1\n2\n3") == 6);
	REQUIRE(stringCalculator("12,87\n43") == 12 + 87 + 43);
	REQUIRE(stringCalculator("54\n32\n98") == 54 + 32 + 98);
}
TEST_CASE("Negative numbers throw an exception") {
	REQUIRE(stringCalculator("-1") == 0);
	REQUIRE(stringCalculator("-93") == 0);
	REQUIRE(stringCalculator("-734") == 0);
}
TEST_CASE("Numbers greater than 1000 are ignored") {
	REQUIRE(stringCalculator("94743") == 0);
	REQUIRE(stringCalculator("20000") == 0);
	REQUIRE(stringCalculator("1001") == 0);
}
TEST_CASE("A single char delimiter can be defined on the first line") {
	REQUIRE(stringCalculator("#") == 0);
	REQUIRE(stringCalculator("!") == 0);
	REQUIRE(stringCalculator("*") == 0);
}
TEST_CASE("Multi char delimiter can be defined on the first line") {
	REQUIRE(stringCalculator("#$") == 0);
	REQUIRE(stringCalculator("!@#") == 0);
	REQUIRE(stringCalculator("*@#$%") == 0);
}
TEST_CASE("A single or multi char delimiter can be defined on the first line") {
	REQUIRE(stringCalculator("#") == 0);
	REQUIRE(stringCalculator("!@#%") == 0);
	REQUIRE(stringCalculator("%@*") == 0);