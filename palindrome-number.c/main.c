#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "solution.c"

int main(int argc, char** argv){
	if (argc != 2) return 1;

	bool result = isPalindrome(atoi(argv[1]));

	char* message =  result ? "is a palindrome": "is not a palindrome";

	printf("%s %s", argv[0], message);
	return !result;
}
