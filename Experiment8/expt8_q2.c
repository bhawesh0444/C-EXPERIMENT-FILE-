#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("Original addresses:\n");
    printf("p1 (int*)  = %p\n", p1);
    printf("p2 (float*)= %p\n", p2);
    printf("p3 (char*) = %p\n\n", p3);

    // Increment pointers
    p1++;
    p2++;
    p3++;

    printf("After increment:\n");
    printf("p1 (int*)  = %p\n", p1);
    printf("p2 (float*)= %p\n", p2);
    printf("p3 (char*) = %p\n\n", p3);

    // Decrement pointers
    p1--;
    p2--;
    p3--;

    printf("After decrement (back to original):\n");
    printf("p1 (int*)  = %p\n", p1);
    printf("p2 (float*)= %p\n", p2);
    printf("p3 (char*) = %p\n", p3);

    return 0;
}
