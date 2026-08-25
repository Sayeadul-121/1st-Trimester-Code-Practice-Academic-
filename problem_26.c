#include <stdio.h>

int main() {
    int a, b, c;

    // Read input values
    scanf("%d %d %d", &a, &b, &c);

    // Evaluate each logical expression
    int cond1 = ((a + b) <= 80) && (b >= 0);
    int cond2 = ((a - b) == 0) || (c != 0);
    int cond3 = (a != b) || ((b < a) && (c > 0));

    // Print output matching the requested format
    printf("1) %d\n", cond1);
    printf("2) %d\n", cond2);
    printf("3) %d\n", cond3);

    return 0;
}