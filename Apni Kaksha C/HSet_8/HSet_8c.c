#include <stdio.h>  
#include <string.h>

int main()  
{   
    int len = 0; 
    char str[10000];

    printf ("String: "); 
    gets(str); 

    len = strlen(str); 

    for(int i = 0; i < len; i++)
    {  
        if(str[i] == ' ')
        {  
            for(int j=i; j < len; j++)  
        {  
            str[j]=str[j+1];  
        }  
        len--;  
        }  
    } 
    printf("String after removing all the white spaces : %s", str);   
}  