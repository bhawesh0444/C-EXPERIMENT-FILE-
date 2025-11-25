#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';

    int *p1 = &a;      // pointer to int
    float *p2 = &b;    // pointer to float
    char *p3 = &c;     // pointer to char

    printf("Integer variable a = %d\n", a);
    printf("Pointer p1 stores address = %p\n", p1);
    printf("Value at p1 ( *p1 ) = %d\n\n", *p1);

    printf("Float variable b = %.2f\n", b);
    printf("Pointer p2 stores address = %p\n", p2);
    printf("Value at p2 ( *p2 ) = %.2f\n\n", *p2);

    printf("Char variable c = %c\n", c);
    printf("Pointer p3 stores address = %p\n", p3);
    printf("Value at p3 ( *p3 ) = %c\n", *p3);

    return 0;
}
