#include <stdio.h>

int main() {
    int a, b, c;

    // Read input values
    scanf("%d %d %d", &a, &b, &c);

    // Evaluate each condition
    int cond1 = (a + b) <= 80;
    int cond2 = !(a + c);
    int cond3 = (a != 0);

    // Print output matching the requested format
    printf("a) %d\n", cond1);
    printf("b) %d\n", cond2);
    printf("c) %d\n", cond3);

    return 0;
}