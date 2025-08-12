#include <stdio.h>

#include "solution.c"

int main(int argc, char** argv){
	printf("received %d argument%s\n", argc, argc > 1 ? "s" : "");
	for (int i=0; i<argc; i++)
		printf("%d: %s\n", i, argv[i]);
}
