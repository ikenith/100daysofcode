/*
Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit


Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/

#include <stdio.h>

int main(){
    int f, ff, n;
    printf("Enter unit consumed: ");
    scanf("%d", &n);

    if (n < 100)
    {
        ff = n * 5;
        printf("Bill: ₹%d\n", ff);
    }
    else if (n >= 100 && n < 200)
    {
        f = 100 * 5;
        ff = (7 * (n - 100)) + f;
        printf("Bill: ₹%d\n", ff);
    }
    else if (n >= 200 && n < 300)
    {
        f = (100 * 5) + (100 * 7);
        ff = (10 * (n - 200)) + f;
        printf("Bill: ₹%d\n", ff);
    }
    else
    {
        f = (100 * 5) + (100 * 7) + (100 * 10);
        ff = (12 * (n - 300)) + f;
        printf("Bill: ₹%d\n", ff);
    }

    return 0;
}