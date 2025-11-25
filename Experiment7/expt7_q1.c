#include <stdio.h>

// Structure for complex number
struct Complex {
    float real;
    float imag;
};

// Function to read a complex number
struct Complex readComplex() {
    struct Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}

// Function to print a complex number
void writeComplex(struct Complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

// Function for addition
struct Complex add(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

// Function for subtraction
struct Complex subtract(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

int main() {
    struct Complex c1, c2, sum, diff;

    printf("Enter first complex number:\n");
    c1 = readComplex();

    printf("\nEnter second complex number:\n");
    c2 = readComplex();

    // Operations
    sum = add(c1, c2);
    diff = subtract(c1, c2);

    // Output
    printf("\nFirst Complex Number: ");
    writeComplex(c1);

    printf("Second Complex Number: ");
    writeComplex(c2);

    printf("\nAddition Result: ");
    writeComplex(sum);

    printf("Subtraction Result: ");
    writeComplex(diff);

    return 0;
}
