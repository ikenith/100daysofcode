// Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include <stdio.h>

int main(){
    int n, isprime = 0, check;
    printf("enter n: ");
    scanf("%d", &n);
    // printf("n = %d\n", n);
    

    for (int i = 1; i <= n; i++)
    {
        
        check = n%i;
        if (check == 0)
        {
            isprime++;
            // printf("isprime = %d\n", isprime);
        }
        // printf("i = %d\n", i);
        // printf("check = %d\n", check);
    }
    if (n == 2)
    {
        printf("Prime\n");
    }
    else if (isprime==2)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not prime\n");
    }
    return 0;
}