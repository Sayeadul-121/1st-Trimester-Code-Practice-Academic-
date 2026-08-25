#include <stdio.h>

int main() {
    float a, b;

    printf("Enter a and b: ");
    scanf("%f %f", &a, &b);

    /* Compute powers manually by multiplying, since math.h is not allowed */
    float a2 = a * a;
    float a3 = a * a * a;
    float b2 = b * b;
    float b3 = b * b * b;

    float numerator = 3.31 * a2 + 2.01 * b3;
    float denominator = 7.16 * b2 + 2.01 * a3;

    float x = numerator / denominator;
    printf("X = %f\n", x);

    return 0;
}