#include <stdio.h>

int main()
{
    double a, b;
    int choice;

    printf("Enter two numbers (a b) and choice (1-4):\n");
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
    {
        int sub_choice;
        printf("Enter choice for division (1 for Quotient, 2 for Remainder):\n");
        scanf("%d", &sub_choice);

        if (b == 0)
        {
            printf("Zero as divisor is not valid!\n");
        }
        else if (sub_choice == 1)
        {

            int quotient = (int)a / (int)b;
            printf("Quotient: %d\n", quotient);
        }
        else if (sub_choice == 2)
        {

            int remainder = (int)a % (int)b;
            printf("Remainder: %d\n", remainder);
        }
        else
        {
            printf("Invalid division choice!\n");
        }
        break;
    }

    default:
        printf("Invalid main choice! Select between 1 and 4.\n");
        break;
    }

    return 0;
}