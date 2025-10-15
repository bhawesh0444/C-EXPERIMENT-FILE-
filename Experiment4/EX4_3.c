#include <stdio.h>

int main() {
    int x = 100;  // Variable declared in the outer block (main function)
    
    {
        // Inner block 1
        int y = 200;  // Variable declared inside first inner block
        printf("Inside inner block 1: x = %d, y = %d\n", x, y);
    }
    
    // Trying to access y here will cause an error (uncommenting next line will fail)
    // printf("Outside inner block 1: y = %d\n", y);

    {
        // Inner block 2
        int z = 300;  // Variable declared inside second inner block
        printf("Inside inner block 2: x = %d, z = %d\n", x, z);
    }
    
    // Trying to access z here will cause an error (uncommenting next line will fail)
    // printf("Outside inner block 2: z = %d\n", z);

    // x is accessible here since it was declared in the outer block
    printf("Outside all inner blocks: x = %d\n", x);

    return 0;
}
