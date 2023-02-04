#include <stdio.h> 

int main (void)
{ 
    char alpha[27]; 
    char *ptr = alpha; 
    
    for (int i = 0; i < 26; i++)
    { 
        *ptr = i + 'A'; 
        ptr++; 
    }

    ptr = alpha; 

    for (int i = 0; i < 26; i++)
    { 
        printf ("%c", *ptr); 
        ptr++; 
    }
    printf("\n"); 
}