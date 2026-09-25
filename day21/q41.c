// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>

int main(){
    int n, complement = 0, swap, digit, first, last, fr, middle, result = 0, middle_complement;
    printf("enter n: ");
    scanf("%d", &n);
    fr = n;

    while (n !=0)
    {
        complement = n % 10;
        swap++;
        digit = digit * 10 + complement;
        n = n/10;
    }
    printf("swap = %d\n", swap);
    for (int i = 1; i <= swap; i++)
    {
        if (i == swap)
        {
            first = fr % 10;
            fr = fr / 10;
            // printf("first = %d\n", first);
            continue;
        }
        if (i == 1)
        {
            last = fr % 10;
            fr = fr / 10;
            // printf("last = %d\n", last);
            continue;
        }
        middle = fr % 10;
        // result = result * 10 + middle;
        fr = fr / 10;
    }
    fr = 0;
    while (result !=0)
    {
        middle_complement = result % 10;
        fr = fr * 10 + middle_complement;
        result = result/10;
    }
    
    printf("%d%d%d\n", last, fr, first);
    
    
    return 0;
}