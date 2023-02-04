#include <stdio.h>

int main() 
{
    int base;
    int exp;
    long double result = 1.0;

    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    while (exp != 0) {
        result *= base;
        exp--;
    }
    printf("Answer = %.0Lf\n", result);
    return 0;
}