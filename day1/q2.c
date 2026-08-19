// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>

int main() {
    int num1, num2, s, d, p, q;

    scanf("%d", &num1);

    scanf("%d", &num2);

    s = num1 + num2;
    d = num1 - num2;
    p = num1 * num2;
    q = num1 / num2;

    printf("Sum = %d ", s);
    printf("Diff = %d ", d);
    printf("Product = %d ", p);
    printf("Quotient = %d\n", q);
    return 0;
}