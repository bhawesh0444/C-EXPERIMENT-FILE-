#include <stdio.h>
int main() {
    int n, i, key, count = 0;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to find its frequency: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    if (count > 0)
        printf("The number %d occurs %d times in the array.\n", key, count);
    else
        printf("The number %d is not present in the array.\n", key);
    return 0;
}