#include <stdio.h>

union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[20];
};

int main() {
    union Address a;

    printf("Enter your present address: ");
    scanf(" %[^\n]", a.home_address);

    printf("\nPresent Address: %s\n", a.home_address);

    return 0;
}
