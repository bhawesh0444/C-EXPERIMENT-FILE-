#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Taking temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Using Formula
    fahrenheit = (celsius * 9 / 5) + 32;

    // Displaying result
    printf("Temperature (in Fahrenheit) = %f", fahrenheit);

    return 0;
}