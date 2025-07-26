#include <stdbool.h>

bool averagePair(int* array, int array_size, float avg){
	float target = avg * 2.0;
	int *l = array;
	int *r = array + array_size - 1;

	while (l != r && r > l) {
		int sum = *l + *r;
		if (sum == target) return true;
		if (sum > target) r--;
		else l++;
	}

	return false;
}
