#include <stdio.h>

int main (void)
{ 
    int n1; 
    int n2; 
    int n3; 
    int average; 

    printf ("Number-1: "); 
    scanf ("%d", &n1); 
    printf ("Number-2: "); 
    scanf ("%d", &n2); 
    printf ("Number-3: "); 
    scanf ("%d", &n3); 

    average = ((n1+n2+n3)/3); 
    printf("Average: %d\n", average); 
}