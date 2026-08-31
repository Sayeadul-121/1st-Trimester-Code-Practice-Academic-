#include <stdio.h>

int main()
{
    float x, y;

    printf("Enter two numbers (X Y): ");
    scanf("%f %f", &x, &y);

    if (x > y)
    {
        printf("%.0f is greater than %.0f\n", x, y);
    }
    else if (x < y)
    {
        printf("%.0f is less than %.0f\n", x, y);
    }
    else
    {
        printf("%.0f is equal to %.0f\n", x, y);
    }

    return 0;
}