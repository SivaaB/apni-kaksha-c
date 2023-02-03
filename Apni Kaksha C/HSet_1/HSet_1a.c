#include <stdio.h>

int main (void)
{ 
    int S1; 
    int S2; 
    int perimeter; 

    printf ("Side-1: "); 
    scanf ("%d", &S1); 
    printf ("Side-2: "); 
    scanf ("%d", &S2); 

    perimeter = (2*(S1+S2)); 

    printf("Perimeter: %d\n", perimeter); 
}