#include <stdio.h>

int main() {
    float r;
    float pi = 3.14;

    printf("Enter radius r: ");
    scanf("%f", &r);

    float area = 2 * pi * r;
    printf("Area: %g\n", area);

    return 0;
}