#include <stdio.h>

struct Employee {
    char name[50];
    float basic;
    float gross;
};

int main() {
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee e[n];   // user-defined size

    for(i = 0; i < n; i++) {
        printf("\nEnter name of employee %d: ", i + 1);
        scanf("%s", e[i].name);

        printf("Enter basic pay of %s: ", e[i].name);
        scanf("%f", &e[i].basic);

        float da = 0.52 * e[i].basic;   // DA = 52%
        e[i].gross = e[i].basic + da;   // gross salary
    }

    printf("\n--- Employee Gross Salary Details ---\n");
    for(i = 0; i < n; i++) {
        printf("Name: %s   |   Gross Salary: %.2f\n", e[i].name, e[i].gross);
    }

    return 0;
}
