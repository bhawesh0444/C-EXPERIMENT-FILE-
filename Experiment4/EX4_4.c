#include <stdio.h>

void counter() {
    static int count = 0;  // Static local variable, initialized only once
    count++;               // Increment count every time function is called
    printf("Counter value: %d\n", count);
}

int main() {
    counter();  // Output: Counter value: 1
    counter();  // Output: Counter value: 2
    counter();  // Output: Counter value: 3
    
    return 0;
}
