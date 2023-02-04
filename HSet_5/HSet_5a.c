#include <stdio.h>

int main (void)
{ 
    int n; 
    int remainder; 
    int sum = 0; 

    printf ("Number : ");
    scanf ("%d", &n); 

    for (int i = 0; i < n; i++)
    { 
        remainder = n % 10; 
        sum = sum + remainder; 
        n = n/10; 
    }

    printf ("Sum of Digits: %d\n", sum); 
}