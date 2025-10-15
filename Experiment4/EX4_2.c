#include <stdio.h>

// Global variable
int global_var = 20;

void functionWithLocal() {
    int local_var = 10;  // Local variable
    printf("Local variable inside function: %d\n", local_var);
    printf("Global variable inside function: %d\n", global_var);
}

int main() {
    functionWithLocal();

    // Trying to access local_var here will cause an error!
    // printf("Local variable outside function: %d\n", local_var);  // ERROR!

    // But we can access global_var anywhere
    printf("Global variable inside main: %d\n", global_var);

    return 0;
}
