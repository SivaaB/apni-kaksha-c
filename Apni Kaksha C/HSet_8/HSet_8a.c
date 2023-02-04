#include <stdio.h>

int main (void)
{ 
    char str[255];

    printf ("Sentence: "); 
    scanf ("%s", &str);

    for (int i = 0; i < 255; i++)
    { 
        if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u')
        {
           str[i] = str[i] - 32;
        }
    }
    printf ("New String: %s\n", str);
}
