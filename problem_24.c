#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    float X = a - b / 3 + c * 2 - 1;
    float Y = a - (b / (3 + c) * 2) - 1;
    float Z = a - ((b / 3) + c * 2) - 1;

    printf("X = %g\n", X);
    printf("Y = %g\n", Y);
    printf("Z = %g\n", Z);

    return 0;
}