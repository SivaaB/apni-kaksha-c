//Allocate memory for 500 integers using calloc &
//then store first 500 natural numbers in that space.

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int *ptr = 0;
    int num[1000]; 
    int *a = (int*) calloc(500,sizeof(int));

    for(int i=0; i<500; i++)
    {
        a[i] = i+1;
    }
    for(int i=0; i<500; i++)
    {
        printf("%d", a[i]);
    }
}