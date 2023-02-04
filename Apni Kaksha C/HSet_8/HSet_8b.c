#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100];
    char result;
  	int i;
    int len;
  	int max = -1;
  	int freq[256] = {0}; 
 
  	printf("\nString :  ");
  	scanf("%s", &str);
  	
  	len = strlen(str);
  	
  	for(i = 0; i < len; i++)
  	{
  		freq[str[i]]++;
	}
  		
  	for(i = 0; i < len; i++)
  	{
		if(max < freq[str[i]])
		{
			max = freq[str[i]];
			result = str[i];
		}
	}
	printf("\n The Maximum Occurring Character in a Given String is %c , it occurs %d times.\n", result, max);
	
  	return 0;
}