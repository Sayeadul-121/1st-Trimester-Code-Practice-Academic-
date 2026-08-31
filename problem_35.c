#include <stdio.h>

int main()
{
    int num;

    printf("Enter a positive nonzero number: ");
    scanf("%d", &num);

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

    return 0;
}