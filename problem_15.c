#include <stdio.h>
int main()
{
    /*
        Program that will take an floating point number as input from the keyboard and use printf
        function to perform the followings:

        (a) Print the number right justified within 10 columns
        (b) Print the number to be right justified to 2 columns (Assuming the input has more
            than 2 digits)
        (c) Print the number rounded to two decimal places
        (d) Print the number rounded to integer (without using conversion or type casting)
        (e) Prints the number in exponential notation/scientific notation

    */

    float num1, num2;
    printf("Enter a floating number\n");
    scanf("%f", &num1);

    num2 = (int)num1;

    printf("(a) Val: \t %f\n", num1);
    printf("(b) Val:%f\n", num1);
    printf("(c) Val:%.2f\n", num1);
    printf("(d) Val:%.0f\n", num2);
    printf("(e) Val:%e\n", num1);

    return 0;
}