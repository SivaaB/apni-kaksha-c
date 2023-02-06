#include<stdio.h>

int main()
{
    int i;
    int n; 
    int element;

    printf ("Enter number of elements in array: "); 
    scanf ("%d", &n);

    int arr[n]; 

    printf("Enter %d array elements: ", n);
    for(i=0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter element to insert: ");
    scanf("%d", &element);
    arr[i] = element;

    printf("\nThe New Array is:\n");
    for(i=0; i < n+1; i++)
    {
        printf("%d\n", arr[i]);
    }
}