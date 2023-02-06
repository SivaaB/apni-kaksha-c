#include<stdio.h>   
  
int main()  
{ 
    int N; 
    int i; 
    int a[i]; 
    
    printf ("Number of elements in array: "); 
    scanf ("%d", &N); 
  
    printf("Enter %d integer numbers\n", N);  
    for(i = 0; i < N; i++) 
    {
        scanf("%d", &a[i]);  
    }
    
    int *ptr = &a[N - 1];  
  
    for(i = 0; i < N; i++)  
    { 
        printf("%d\n", *ptr--);  
    } 
}  