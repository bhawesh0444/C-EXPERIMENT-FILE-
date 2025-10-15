#include <stdio.h>

int main() {
    int i, j, k, num = 1;

    // number of rows
    int rows = 3;

    for (i = 1; i <= rows; i++) {
        // print spaces
        for (k = i; k < rows; k++) {
            printf(" ");
        }

        // print numbers
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }

        printf("\n");
    }

    return 0;
}
