#include <stdbool.h>
#include <stdio.h>

#include <math.h>

bool isPalindrome(int x) {
    if (x<0) return false;

    int ndigits = 1;
	int powsof10[10] = {1,10};

    while (x / powsof10[ndigits] > 0) {
        ndigits+=1;
		powsof10[ndigits] = (int)pow(10.0,ndigits);
	}

    if (ndigits==1) return true;

	for (int i=1; i<=ndigits/2; i++){
		int right = (x % powsof10[i]) / powsof10[i-1];
		int left = (x % powsof10[ndigits-i+1]) / powsof10[ndigits-i];
		if (left!=right) return false;
	}

    return true;
}
