#include <stdio.h> 

int main (void)
{ 
    int temp; 

    printf ("Temperature: "); 
    scanf ("%d", &temp); 

    if (temp > 30)
    { 
        printf ("Hot!"); 
    }
    else if (temp < 22)
    { 
        printf ("Cold!"); 
    }
    else
    { 
        printf ("Normal"); 
    }
}