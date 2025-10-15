#include <stdio.h>

int main() {
    float length, width, area, perimeter;

    // Taking length from the user
    printf("Enter the length: ");
    scanf("%f", &length);

    // Taking width from the user
    printf("Enter the width: ");
    scanf("%f", &width);

    // Calculating area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // Printing the results 
    printf("Area: %f\n", area);
    printf("Perimeter: %f\n", perimeter);

    return 0;
}