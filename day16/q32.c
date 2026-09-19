// Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>

int main(){
    int n, digit, reversed = 0, check;
    printf("enter n: ");
    scanf("%d", &n);
    check = n;

    while (n != 0)
    {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }
    if (check==reversed){
        printf("Palindrome\n");
    }
    else{
        printf("Not palindrome\n");
    }    
    
    return 0;
}
