#include <stdio.h>

int main() {


    int a, b;

    printf("Enter first number: ");


    scanf("%d", &a);

    printf("Enter second number: ");


    scanf("%d", &b);

    
    printf(" AND (a & b) = %d\n", a & b);


    printf(" OR  (a | b) = %d\n", a | b);


    printf(" NOT (~a ) = %d\n", ~a);

    printf(" NOT (~b) = %d\n", ~b);
   



    return 0;
}
