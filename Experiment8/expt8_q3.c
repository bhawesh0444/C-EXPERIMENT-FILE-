#include <stdio.h>

// Function that takes pointers as parameters
void modifyValues(int *x, int *y) {
    *x = *x + 5;  // add 5 to the value of x
    *y = *y * 2;  // multiply y by 2
}

int main() {
    int a = 10, b = 4;

    printf("Before function call:\n");
    printf("a = %d, b = %d\n", a, b);

    // Passing variables by reference 
    modifyValues(&a, &b);

    printf("\nAfter function call:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}