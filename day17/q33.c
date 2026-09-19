// Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <math.h>
#include <stdio.h>

int main(){
    int n, digit, power = 0, check, original, count=0;
    printf("enter n: ");
    scanf("%d", &n);

    check = n;
    original = n;

    while (n != 0)
    {
        digit = n % 10;
        n = n / 10;
        count = count + 1;
    }
    
    for (int i = 0; i < count; i++)
    {
        digit = check % 10;
        power = power + pow(digit, count);
        check = check / 10;
    }    
    if (power == original)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("Not Armstrong\n");
    }
    
    
    return 0;
}
