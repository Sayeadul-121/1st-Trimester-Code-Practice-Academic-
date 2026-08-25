#include <stdio.h>

int main() {
    int original, x;

    printf("Enter X: ");
    scanf("%d", &original);

    /* Each operation is shown starting fresh from the original value,
       so we reset x back to "original" before every line */

    x = original;
    printf("X++ : %d\n", x++);   /* prints old value, then x becomes x+1 */

    x = original;
    printf("++X : %d\n", ++x);   /* x becomes x+1 first, then prints it */

    x = original;
    printf("X-- : %d\n", x--);   /* prints old value, then x becomes x-1 */

    x = original;
    printf("--X : %d\n", --x);   /* x becomes x-1 first, then prints it */

    return 0;
}