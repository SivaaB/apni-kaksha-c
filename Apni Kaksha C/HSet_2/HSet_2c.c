#include <stdio.h> 

int main (void)
{ 
    int n1; 
    int n2;

    printf ("n1: "); 
    scanf ("%d", &n1); 
    printf ("n2: "); 
    scanf ("%d", &n2); 
    
    int n[] = {n1, n2}; 
    int min = n[0];

    for (int i = 0; i < 2 ; i++)
    { 
        if (n[i] < min)
        { 
            min = n[i]; 
        }
    }

    printf ("Lowest Number: %d\n", min); 
}