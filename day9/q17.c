// Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
// D = b*b - 4ac
/*
Calculate D
        ↓
     Is D > 0?
      /      \
    YES       NO
     ↓         ↓
different   Is D == 0?
             /       \
           YES        NO
            ↓          ↓
          same      complex
*/

#include <stdio.h>
#include <math.h>

int main(){
    float D, b, a, c, x1, x2;
    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    D = pow(b, 2) - (4 * a * c);
    x1 = (-b + sqrt(D)) / (2 * a);
    x2 = (-b - sqrt(D)) / (2 * a);

    if (D > 0)
    {
        printf("Roots are real and different: %.0f %.0f\n", x1, x2);
    }
    else if (D == 0)
    {
        if (x1 == x2)
        {
            printf("Roots are real and same: %.0f\n", x1);
        }
        
    }
    else if (D < 0)
    {
        printf("Roots are complex.\n");
    }
    
    else
    {
        printf("Unknow Error!!!\n");
    }
    
    
    return 0;
}
