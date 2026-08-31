#include <stdio.h>

int main()
{
    int X;
    int guess;
    int won = 0;

    printf("Player-1, enter secret number X: ");
    scanf("%d", &X);

    printf("Player-2, Try 1: ");
    scanf("%d", &guess);

    if (guess == X)
    {
        printf("Right, Player-2 wins!\n");
        won = 1;
    }
    else
    {
        printf("Wrong, 2 Chance(s) Left!\n");
    }

    if (won == 0)
    {
        printf("Player-2, Try 2: ");
        scanf("%d", &guess);

        if (guess == X)
        {
            printf("Right, Player-2 wins!\n");
            won = 1;
        }
        else
        {
            printf("Wrong, 1 Chance(s) Left!\n");
        }
    }

    if (won == 0)
    {
        printf("Player-2, Try 3: ");
        scanf("%d", &guess);

        if (guess == X)
        {
            printf("Right, Player-2 wins!\n");
            won = 1;
        }
        else
        {
            printf("Wrong, 0 Chance(s) Left!\n");
        }
    }

    if (won == 0)
    {
        printf("Player-1 wins!\n");
    }

    return 0;
}