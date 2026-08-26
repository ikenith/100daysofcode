// Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include <stdio.h>

int main(){
    int n1, n2, n3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2 && n1 > n3)
    {
        printf("Your first number %d, is the greatest among the three.\n", n1);
    }
    

    else if (n2 > n1 && n2 > n3)
    {
        printf("Your second number %d, is the greatest among the three.\n", n2);
    }
    

    else
    {
        printf("Your third number %d, is the greatest among the three.\n", n3);
    }
    
    return 0;
}