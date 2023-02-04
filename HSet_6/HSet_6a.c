#include <stdio.h> 

int main (void)
{ 
    int n1; 
    int n2; 
    int *p1 = &n1; 
    int *p2 = &n2; 

    printf ("n1: "); 
    scanf ("%d", &n1); 
    printf ("n2: "); 
    scanf ("%d", &n2); 

    if (*p1 > *p2)
    { 
        printf ("n1 is greater than n2. \n"); 
    }
    else if (*p2 > *p1)
    { 
        printf ("n2 is greater than n1. \n"); 
    }
}