#include <stdio.h>

/*
	File name : strrevPtr_5.c
	Day 	  : 3
	Purpose   : Implement the strrev using pointers
*/
void revString(char *);
int main()
{
	char str1[80];
	puts("Enter any name : ");
	gets(str1);
	revString(str1);
 	printf("Reversed string is :%s\n",str1);
	return 0;
}
void revString(char *str1)
{
 	int i=0,j=0,len = 0;
	char temp;
	while(*(str1+i) != '\0')
	{
		len++;
		i++;
	}
	for(i=len-1;i>=len/2;i--,j++)
	{
	  temp=*(str1+j);
   	  *(str1+j)=*(str1+i);
	  *(str1+i)=temp;
 	}
}
