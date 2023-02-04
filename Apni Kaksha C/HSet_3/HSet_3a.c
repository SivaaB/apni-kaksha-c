#include <stdio.h>

int main (void)
{ 
    int n; 
    int temp; 
    int remainder = 0; 
    int sum = 0; 

    printf ("Number: "); 
    scanf ("%d", &n);

    n = temp; 

    while (n != 0)
    { 
        remainder = n % 10; 
        sum += remainder * remainder * remainder; 
        n /= 10; 
    }

    if (sum == temp)
    { 
        printf ("Armstrong Number"); 
    }
    else
    { 
        printf ("Not an Amrstrong Number."); 
    }
}