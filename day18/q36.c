// Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include <stdio.h>

int main()
{
    int a, b, n;
    printf("enter a, b: ");
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            if (b % i == 0)
            {
                n = i;
            }
        }
    }
    printf("%d\n", n);

    return 0;
}