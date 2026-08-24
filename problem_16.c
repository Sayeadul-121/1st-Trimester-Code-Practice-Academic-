#include <stdio.h>

int main()
{
    float a, b, addition, subtraction, multiplication, quotient, reminder;

    scanf("%f%f", &a, &b);

    addition = a + b;
    subtraction = a - b;
    multiplication = a * b;

    quotient = (int)a / (int)b;
    reminder = (int)a % (int)b;

    printf("Addition: %.1f\n", addition);
    printf("Subtraction: %.1f\n", subtraction);
    printf("Multiplication: %.1f\n", multiplication);
    printf("Quotient: %.0f\n", quotient);
    printf("Reminder: %.0f\n", reminder);

    return 0;
}