#include <stdio.h>

int main() {
    int i;
    float f;

    printf("Enter an integer and a floating point number: ");
    scanf("%d %f", &i, &f);

    /* (a) Assignment conversion - happens automatically */
    int assignedInt = f;       /* float -> int: decimal part is dropped */
    float assignedFloat = i;   /* int -> float */

    printf("Assignment: %f assigned to an int produces %d\n", f, assignedInt);
    printf("Assignment: %d assigned to a float produces %f\n", i, assignedFloat);

    /* (b) Explicit type casting - we ask for it using (type) */
    printf("Type Casting: (float) %d produces %f\n", i, (float)i);
    printf("Type Casting: (int) %f produces %d\n", f, (int)f);

    return 0;
}