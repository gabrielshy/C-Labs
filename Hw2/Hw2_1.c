(/* Write a program that ask the user to input 
3 different integers between 1 and 20, and output 
the product of the two highest numbers inputted*/);

#include <stdio.h>

int main()
{
    int x, y, z, sum;
    printf("Enter Integer between 1 and 20:\n");
    scanf("%d", &x);
    printf("Enter Integer between 1 and 20:\n");
    scanf("%d", &y);
    printf("Enter Integer between 1 and 20:\n");
    scanf("%d", &z);
    if (x > y) {
        if (y > z) {
            sum = x + y;
        } else {
            sum = x + z;
        }
    } else if (y > z) {
        if (x > z) {
            sum = y + x;
        } else {
            sum = y + z;
        }
    } else if (z > x) {
        if (x > y) {
            sum = z + x;
        } else {
            sum = z + y;
        }
    }

    printf("The sum of the two highest numbers is %d", sum);
}