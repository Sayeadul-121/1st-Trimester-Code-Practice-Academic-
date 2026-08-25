#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
    double x_deg, x_rad, X;

    // Read angle in degrees
    scanf("%lf", &x_deg);

    // Convert degrees to radians
    x_rad = x_deg * (PI / 180.0);

    // Compute the expression step-by-step
    double term1 = 2 * pow(cos(x_rad), 2);
    double term2 = sqrt(3) * sin(x_rad);
    double term3 = log(x_deg / 2.0); // Natural logarithm ln(x/2)

    X = term1 - term2 + term3;

    // Print result formatted to 6 decimal places
    printf("%f\n", X);

    return 0;
}