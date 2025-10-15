#include <stdio.h>

int main() {
    double population = 100000; // initial population
    double growthRate = 0.10;   // 10% growth rate
    int year;

    printf("Year\tPopulation\n");
    printf("----------------------\n");

    for(year = 1; year <= 10; year++) {
        population = population + (population * growthRate); // increase by 10%
        printf("%d\t%.0lf\n", year, population);
    }

    return 0;
}
