#include <stdio.h>

int main()
{
    float angle1, angle2, angle3;

    printf("Enter three angles: ");
    scanf("%f %f %f", &angle1, &angle2, &angle3);

    if (angle1 > 0 && angle1 < 180 &&
        angle2 > 0 && angle2 < 180 &&
        angle3 > 0 && angle3 < 180)
    {

        if (angle1 + angle2 + angle3 == 180)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    else
    {

        printf("No\n");
    }

    return 0;
}