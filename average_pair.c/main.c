#include <stdio.h>
#include <stdlib.h>

#include "solution.c"

int main(int argc, char** argv){
	if (argc < 2) return 1;
	float avg = atof(argv[1]);
	const int array_size = argc - 2;
	int* array = calloc(array_size, sizeof(int));

	if (array == NULL) {
		fprintf(stderr,"ERR: MEMORY NO???");
		return 5;
	}

	for (int i=0; i<array_size; i++){
		array[i] = atoi(argv[i+2]);
		printf("%d/%d: %d\n", i, array_size,array[i]);
	}

	return ! averagePair(array, array_size, avg);
}
