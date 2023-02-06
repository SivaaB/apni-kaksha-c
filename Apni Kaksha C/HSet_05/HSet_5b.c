#include <stdio.h> 
#include <math.h> 

int main (void)
{ 
    int n; 
    int square_root; 

    printf ("Number: "); 
    scanf ("%d", &n); 

    square_root = sqrt(n); 
    printf("Square Root: %d\n", square_root); 
} 
