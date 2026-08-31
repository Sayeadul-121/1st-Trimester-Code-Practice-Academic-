#include <stdio.h>

int main()
{
    double num1, num2;
    char op;

    printf("Enter expression (e.g. 100 * 55.5): ");
    scanf("%lf %c %lf", &num1, &op, &num2);

    switch (op)
    {
    case '+':
        printf("Addition: %lf\n", num1 + num2);
        break;

    case '-':
        printf("Subtraction: %lf\n", num1 - num2);
        break;

    case '*':
        printf("Multiplication: %lf\n", num1 * num2);
        break;

    case '/':

        if (num2 == 0)
        {
            printf("Division: Zero as divisor is not valid!\n");
        }
        else
        {
            printf("Division: %lf\n", num1 / num2);
        }
        break;

    default:
        printf("Invalid operator! Please use +, -, *, or /.\n");
        break;
    }

    return 0;
}