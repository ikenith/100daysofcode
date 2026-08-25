// Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include <stdio.h>

int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if (c == 'a'|| c == 'e' || c == 'i' || c == 'o')
    {
        printf("%c is a vowel.\n", c);
    }
    else
    {
        printf("%c is a consonant.\n", c);
    }
    
    return 0;
}