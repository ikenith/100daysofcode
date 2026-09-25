// Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>

int main(){
    int n, digit, complemented = 0, result = 0;
    int digits = 0;
    printf("enter n: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;
        digit = 1 - digit;
        complemented = complemented * 10 + digit;
        digits++;
        n = n / 10;
    }

    while (complemented != 0)
    {
        digit = complemented % 10;
        result = result * 10 + digit;
        complemented = complemented / 10;
    }

    printf("%0*d\n", digits, result);
    
    
    return 0;
}