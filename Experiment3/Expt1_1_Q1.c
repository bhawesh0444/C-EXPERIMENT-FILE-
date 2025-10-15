#include <stdio.h>

int main() {
    int a, b, c;
    
    // Input side lengths
    printf("Enter the three integer sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if the triangle is valid
    if (a + b <= c || b + c <= a || a + c <= b || a <= 0 || b <= 0 || c <= 0) {
        printf("Invalid triangle\n");
    } else {
        // Check type of triangle in a specific order
        if (a == b && b == c) {
            printf("Equilateral\n");
        } 
        
        else if ((a * a + b * b == c * c) || (b * b + c * c == a * a) || (a * a + c * c == b * b)) {
            printf("Right angle\n");
        } 
        else if (a == b || b == c || a == c) {
            printf("Isosceles\n");
        } 
        else {
            printf("Scalene\n");
        }
    }
    return 0;
}