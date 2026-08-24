#include <stdio.h>

int main()
{
    /*
       Program that will declare a variable from each data type: long int, long long int, long double,
        short int. Then it will initialize them with values and print them.

   */

    long int num1 = 2147483647;
    long long int num2 = 9223372036854775807;
    long double num3 = 1.1E+4932;
    short int num4 = 32767;

    printf("The long int value: %ld\n", num1);
    printf("The long long int value: %lld\n", num2);
    printf("The long double value: %Lf\n", num3);
    printf("The short int value: %hd\n", num4);

    return 0;
}