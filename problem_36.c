#include <stdio.h>

int main()
{
    float original_num;

    printf("Enter a number: ");
    scanf("%f", &original_num);

    if (original_num == 0)
    {
        printf("Zero is not a valid input\n");
    }

    else if (original_num < 0)
    {
        printf("Negative input is not valid\n");
    }

    else
    {
        int num = (int)original_num;

        if (num == original_num)
        {

            while (num % 2 == 0)
            {
                num = num / 2;
            }

            if (num == 1)
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
    }

    return 0;
}