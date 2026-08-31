#include <stdio.h>
int main()
{

    /*
         Program that will take three integer numbers from keyboard but assign only the first and
         last inputs to variables and skip any assignment of the middle one.
    */

    int a, b, c;
    printf("Enter three number\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("First value %d, ", a);
    printf("Last value %d", c);
}