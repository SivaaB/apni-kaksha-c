#include <stdio.h>

int main (void)
{ 
    char chr; 

    printf ("Character : "); 
    scanf ("%c", &chr); 

    if (chr >= '0' && chr <= '9')
    { 
        printf ("Integer"); 
    }
    else
    { 
        printf ("Not an integer."); 
    }

}