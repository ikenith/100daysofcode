// Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

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
    printf("%d\n", (a*b)/n);

    return 0;
}