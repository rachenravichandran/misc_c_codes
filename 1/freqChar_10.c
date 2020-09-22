#include <stdio.h>
#include <string.h>

/*
	File name : freqChar_10.c
	Day 	  : 1
	Purpose   : Find the frequency of characters in a string
*/

int main()
{
	int i,j,count,len;
	char c[25];
	puts("Enter a String :");
	gets(c);
	len = strlen(c);
	printf("The frequency of each character  in the string %s is\n",c);
	for(i=0;i<len;i++)
	{
		count = 1;
		if(c[i]!='\0')
		{
			for(j=i+1;j<len;j++)
			{
                                if(c[i]==c[j])
				{
					count++;
					c[j] = '\0';
				}
			}
			printf("Character:%c  -   Frequency:%d\n",c[i],count);
		}
	}
	return 0;
}
