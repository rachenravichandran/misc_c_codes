#include <stdio.h>
#include <string.h>

/*
	File name : strrevPtr_5.c
	Day 	  : 3
	Purpose   : Implement the strrev using pointers
*/
void revString(char *,int);
int main()
{
	char str1[80];int len;
	puts("Enter any name : ");
	gets(str1);
	len=strlen(str1);
	revString(str1,len);
 	printf("Reversed string is :%s",str1);
	return 0;
}
void revString(char *str1,int len)
{
 	int i,j=0;char temp;
 	for(i=len-1;i>=len/2;i--,j++)

 	{
	  temp=str1[j];
   	  str1[j]=str1[i];
	  str1[i]=temp;
 	}
}
