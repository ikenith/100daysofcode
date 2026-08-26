// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

#include <stdio.h>

int main(){
    float a, b, c;
    printf("Enter the three sides of a triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == b && b == c )
    {
        printf("Equilateral triangle.\n");
    }
    else if (a == b && a != c || a == c && a != b || b == c && c != a)
    {
        printf("Isosceles triangel.\n");
    }
    else
    {
        printf("Scalene triangle.\n");
    }
    
    return 0;
}