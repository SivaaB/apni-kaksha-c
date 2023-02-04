#include<stdio.h>
#include<string.h>

int main()
{
        char str[20];

        printf("\nEnter any string: ");
        gets(str);

        for(int i=0; i<=strlen(str); i++)
        { 
            if(str[i]>='a' && str[i]<='z')
            {
                str[i]=str[i]-32;
            }
            else if(str[i]>='A' && str[i]<='Z')
            {
                str[i]=str[i]+32;
            }
        }
        printf("\nThe Converted String is: %s\n",str);

}