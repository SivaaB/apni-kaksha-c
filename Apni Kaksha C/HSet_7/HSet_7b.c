#include <stdio.h> 

int main (void)
{ 
    int n; 
    printf ("Enter number of elements in array: "); 
    scanf ("%d", &n); 
    int arr[n]; 

    printf ("Enter elements in array: "); 
    for (int i = 0; i < n; i++)
    { 
        scanf("%d", &arr[i]); 
    }

    int max = arr[0]; 
    for (int j = 0; j < n; j++)
    { 
        if (arr[j] > max)
        { 
            max = arr[j]; 
        }
    }

    printf ("Max: %d\n", max); 
} 
