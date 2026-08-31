#include <stdio.h>

int main()
{
    double a, b;
    int choice;

    printf("Enter two real numbers (a b) and choice (1-4):\n");
    scanf("%lf %lf %d", &a, &b, &choice);

    switch (choice)
    {
    case 1:
        printf("Addition: %g\n", a + b);
        break;

    case 2:
        printf("Subtraction: %g\n", a - b);
        break;

    case 3:
        printf("Multiplication: %g\n", a * b);
        break;

    case 4:

        if (b == 0)
        {
            printf("Division: Zero as divisor is not valid!\n");
        }
        else
        {
            printf("Quotient: %g\n", a / b);
        }
        break;

    default:
        printf("Invalid choice! Choice must be between 1 and 4.\n");
        break;
    }

    return 0;
}