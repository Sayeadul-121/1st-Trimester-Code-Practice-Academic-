#include <stdio.h>
#include <math.h>

int main() {
    float x;

    printf("Enter X: ");
    scanf("%f", &x);

    float absX = fabs(x);   /* absolute value, always positive */
    float A = ceil(absX);   /* round up to nearest integer */
    float B = floor(absX);  /* round down to nearest integer */
    float C = absX;

    printf("A = %.0f, B = %.0f, C = %g\n", A, B, C);

    return 0;
}