#include <stdio.h>
int main()
{
    /*

    Program that will receive the values of an integer, a floating point number, a character from
     the keyboard and print those values.

    */

    int num1;
    float num2;
    char num3;
    printf("Enter the integer,float and character value\n");
    scanf("%d%f %c", &num1, &num2, &num3); // you have to space between float and char data type for print character value
    printf("The integer value: %d\n", num1);
    printf("The floating point value: %f\n", num2);
    printf("The character value: %c\n", num3);
}