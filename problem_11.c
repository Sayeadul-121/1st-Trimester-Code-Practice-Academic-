#include <stdio.h>
int main()
{

    /*
        Program that will declare a variable from each data type: unsigned int, unsigned long int,
        unsigned long long int, unsigned short int. Then it will initialize them with values and print
        them.
    */

    unsigned int num1 = 4294967295;
    unsigned long int num2 = 4294967295;
    unsigned long long int num3 = 18446744073709551615;
    unsigned short int num4 = 65535;

    printf("The unsigned int value: %u\n", num1);
    printf("The unsigned long int value: %lu\n", num2);
    printf("The unsigned long long int value: %llu\n", num3);
    printf("The umsigned short int value: %hu\n", num4);

    return 0;
}