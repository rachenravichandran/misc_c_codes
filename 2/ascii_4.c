#include <stdio.h>
#include <string.h>

/*
	File name : ascii_4.c
	Day 	  : 2 
	Purpose   : find Ascii values
*/

int main()
{
	char c[35];
	int i;
	puts("Enter the String : ");
	gets(c);
	for(i=0;i<strlen(c);i++)
	{
		printf("%c   %d\n",c[i],c[i]);
	}	
	return 0;
}
