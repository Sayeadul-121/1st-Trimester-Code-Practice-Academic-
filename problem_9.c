#include <stdio.h>
int main()
{

    /*
        Program that will declare a variable from each data type: double, boolean. Then it will
        initialize them with values and print them.
    */

    double num1 = 3.14;
    int num2 = 1;
    double num3 = 1.618039;
    int num4 = 0;
    printf("The double value: %e \n", num1); // when we want to get output as a scientific mode we have to use %e
    printf("The boolean value: %d \n", num2);
    printf("The double value: %lf \n", num3);
    printf("The boolean value: %d \n", num4);
}
