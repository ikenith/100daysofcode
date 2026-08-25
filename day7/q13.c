// Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/


#include <stdio.h>

int main(){
    int l;
    printf("Enter the year: ");
    scanf("%d", &l);

    if (l % 4 == 0 && l % 100 != 0)
    {
        printf("%d is a leap year.\n", l);
    }
    else
    {
        printf("%d is not a leap year.\n", l);
    }
    
    
    return 0;
}