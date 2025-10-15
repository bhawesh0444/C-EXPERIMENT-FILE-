#include <stdio.h>

// Global variable
int number = 5;

void show_number() {
    printf("Number is %d\n", number);  // Access global variable
}

void change_number() {
    number = 10;  // Modify global variable
    printf("Number changed to %d\n", number);
}

int main() {
    show_number();    // Output: Number is 5
    change_number();  // Output: Number changed to 10
    show_number();    // Output: Number is 10

    return 0;
}
