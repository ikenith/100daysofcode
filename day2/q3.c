// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

#include <stdio.h>

int main() {
    int lenght, breadth, perimeter, area;

    printf("Enter Lenght: ");
    scanf("%d", &lenght);

    printf("Enter Breadth: ");
    scanf("%d", &breadth);

    perimeter = 2 * (lenght + breadth);
    area = lenght * breadth;

    printf("Area = %d, ", area);
    printf("Perimeter = %d\n", perimeter);

    return 0;
}