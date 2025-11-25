#include <stdio.h>

int main() {
    int n, i;
    
    // Input size of the array
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("At least two numbers are required!\n");
        return 0;
    }

    int arr[n];

   
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first, second;

    
    if (arr[0] > arr[1]) {
        first = arr[0];
        second = arr[1];
    } else {
        first = arr[1];
        second = arr[0];
    }

    
    for (i = 2; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    printf("The second largest integer is: %d\n", second);

    return 0;
}