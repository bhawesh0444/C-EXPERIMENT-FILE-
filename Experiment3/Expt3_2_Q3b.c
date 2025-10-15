#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int f = 1, i;
    for(i = 1; i <= n; i++)
        f *= i;
    return f;
}

// Function to calculate nCr
int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int i, j, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        // print spaces for triangle formatting
        for(j = 0; j < n - i - 1; j++)
            printf(" ");

        // print numbers
        for(j = 0; j <= i; j++)
            printf("%d ", nCr(i, j));

        printf("\n");
    }

    return 0;
}
