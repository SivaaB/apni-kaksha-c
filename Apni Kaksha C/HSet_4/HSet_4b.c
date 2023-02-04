#include <stdio.h> 

int main (void)
{ 
    int num; 
    int checker; 

    printf ("Number: "); 
    scanf ("%d", &num);
     
    for (int i = 2; i <= num/2; i++)
    { 
        if (num % i == 0)
        { 
            checker = 0; 
        }
        else
        { 
            checker = 1; 
        }
    }

    if (checker == 0)
    { 
        printf ("Not Prime");
    } 
    else 
    { 
        printf ("Prime"); 
    }
}