#include <stdio.h>

int main (void)
{ 
    int n; 

    printf ("Number: "); 
    scanf ("%d", &n); 

    if (n >= 1)
    { 
        printf("Natural Number"); 
    }
    else 
    { 
        printf("Not a natural number."); 
    }
}
