#include <stdio.h>

int main() {
    float x, y, max;

    printf("Enter X and Y: ");
    scanf("%f %f", &x, &y);

    max = (x > y) ? x : y;
    printf("Max: %g\n", max);

    return 0;
}