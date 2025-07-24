#include <stdbool.h>

#include <math.h>

bool isPalindrome(int x) {
    if (x<0) return false;

    int ndigits = 1;

    while (x / (int) pow(10.0,ndigits) > 0)
        ndigits+=1;

    if (ndigits==1) return true;
    if (ndigits==2 && x%11==0) return true;

    int evenNdigits = ndigits % 2 == 0;
    int splitpoint = evenNdigits ? ndigits/2 : ndigits/2+1;

    int left, right;

    right = x % (int) pow(10.0,splitpoint);
    left = x / (int) pow(10.0, evenNdigits ? splitpoint : splitpoint-1);

    if (right == 0 || left == 0 || (right+left)/10==0) return false;

    if ((left+right)%11==0) return true;

    return false;
}
