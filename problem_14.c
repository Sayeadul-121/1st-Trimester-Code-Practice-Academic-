#include <stdio.h>
int main()
{
    /*
        Program that will define a global and a local variable with the same name but with different
        values, and then do the following steps in order-
        A. Print the value of the variable before defining the local variable
        B. Print the value of the variable after defining the local variable
        C. Explicitly print the value of the variable as global
    */

    int global = 10, local = 20;

    printf("A. Global: %d\n", global);
    printf("B. Local: %d\n", local);

    printf("C. Global: %d\n", global);

    return 0;
}