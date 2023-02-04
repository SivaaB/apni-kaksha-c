#include <stdio.h> 

int main (void)
{ 
    int n; 
    printf ("Enter number of elements in array: "); 
    scanf ("%d", &n); 
    int arr[n]; 
    int freq[n]; 
    int i, j; 

    printf ("Enter elements in array: "); 
    for (int i = 0; i < n; i++)
    { 
        scanf("%d", &arr[i]); 
        freq[i] = -1; 
    }

    for (i = 0; i < n; i++)
    { 
        int count = 1; 
        for (int j = i+1 ; j < n; j++)
        { 
            if (arr[i] == arr[j])
            { 
                count++; 
                freq[j] = 0; 
            }
        }
        if (freq[i] != 0)
        { 
            freq[i] = count; 
        }
    }
    for (int i = 0; i < n; i++)
    { 
        if (freq[i] != 0)
        { 
            printf ("Frequency of %d is %d \n", arr[i], freq[i]); 
        }
    }
}