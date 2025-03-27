#include "logic.h"
int sum_of_positive_numbers(int number_1, int number_2, int number_3) {
	if (number_1 < 0 || number_2 < 0 || number_3 < 0) {
		return - 1;
	}

	return (number_1 + number_2  + number_3);
}