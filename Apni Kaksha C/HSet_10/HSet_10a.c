#include <stdio.h> 

int main (void)
{ 
    FILE *fptr; 
    fptr = fopen ("text_10a.txt", "r"); 

    char ch; 

    do 
    { 
    fscanf (fptr, "%c", &ch); 
    printf ("%c\n", ch); 
    }
    while (ch != 'a'); 

    fclose(fptr); 
}