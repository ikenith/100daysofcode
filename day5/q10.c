// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include <stdio.h>

int main() {
    int time, h, m, s;

    printf("Enter Seconds: ");
    scanf("%d", &time);

    h = time / 3600;
    m = time % 3600;
    m = m / 60;
    s = m % 60;
    s = s;

    printf("%d:%d:%d\n", h, m, s);

    return 0;
}
