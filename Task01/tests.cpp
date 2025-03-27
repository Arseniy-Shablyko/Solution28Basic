#include "tests.h"
void print(int number_1, int number_2, int number_3, bool result) {
	cout << "Number 1 = " << number_1
		<< ", Number 2 = " << number_2
		<< ", Number 3 = " << number_3
		<< "\t--> " << (result ? "Pass" : "Fail")
		<< endl;
}

void test01() {
	int number_1 = 5;
	int number_2 = 3;
	int number_3 = 9;

	int expected = 17;
	int actual = sum_of_positive_numbers(number_1, number_2, number_3);
	print(number_1, number_2, number_3, actual == expected);
}

void test02() {
	int number_1 = -5;
	int number_2 = 3;
	int number_3 = 9;

	int expected = -1;
	int actual = sum_of_positive_numbers(number_1, number_2, number_3);
	print(number_1, number_2, number_3, actual == expected);
}

void test03() {
	int number_1 = 5;
	int number_2 = 3;
	int number_3 = -9;

	int expected = -1;
	int actual = sum_of_positive_numbers(number_1, number_2, number_3);
	print(number_1, number_2, number_3, actual == expected);
}

void test04() {
	int number_1 = 5;
	int number_2 = -3;
	int number_3 = 9;

	int expected = -1;
	int actual = sum_of_positive_numbers(number_1, number_2, number_3);
	print(number_1, number_2, number_3, actual == expected);
}

void test05() {
	int number_1 = -5;
	int number_2 = -3;
	int number_3 = -9;

	int expected = -1;
	int actual = sum_of_positive_numbers(number_1, number_2, number_3);
	print(number_1, number_2, number_3, actual == expected);
}