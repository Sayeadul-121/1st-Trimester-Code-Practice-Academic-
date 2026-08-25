#include <stdio.h>

int main() {
    int x, y, result;

    printf("Enter X and Y: ");
    scanf("%d %d", &x, &y);

    result = x;
    result += y;   /* same as result = result + y */
    printf("Incremented Value: %d\n", result);

    result = x;
    result -= y;   /* same as result = result - y */
    printf("Decremented Value: %d\n", result);

    return 0;
}