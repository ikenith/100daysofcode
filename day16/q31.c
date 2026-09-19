// Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

// divide by 2 until you get the remainder as 0

#include <stdio.h>

int main() {
    int n, remainder;
    int binary = 0;
    int place = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 2;

        binary = binary + remainder * place;
        place = place * 10;

        n = n / 2;
    }

    printf("Binary = %d\n", binary);

    return 0;
}