#include <stdio.h>
#include <string.h>
/*
	File name : revStrArr_5.c
	Day 	  : 2 
	Purpose   : Reverse an array of strings
*/
int reverse(char str[],int len);

int main()
{
	char strArr[20][15];
	int n,i;
	puts("Enter the number of names:");
	scanf("%d",&n);
	puts("Enter the names:");
	__fpurge(stdin);
	for(i=0;i<n;i++)
	{
		gets(strArr[i]);
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
