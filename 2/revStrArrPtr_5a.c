#include <stdio.h>
#include <string.h>
/*
	File name : revStrArrPtr_5a.c
	Day 	  : 2 
	Purpose   : Reverse an array of strings using pointer array
*/
int reverse(char str[],int len);

int main()
{
	char *strArr[20];
	int n,i;
	puts("Enter the number of names:");
	scanf("%s",&n);
	puts("Enter the names:");
	__fpurge(stdin);
	for(i=0;i<n;i++)
	{
		scanf("%d",strArr[i]);
	}
	puts("The reversed strings are:");
	for(i = 0; i < n; i++)
	{
		reverse(strArr[i],strlen(strArr[i]));
		printf("%s\n",strArr[i]);
	}
	return 0;
}

int reverse(char str[],int len)
{
	int i = 0,j = len-1;
	char temp;
	for(; i < len/2 ; i++,j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	return 0;
}
