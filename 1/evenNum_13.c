#include <stdio.h>

/*
	File name : evenNum_13.c
	Day 	  : 1
	Purpose   : Print first n-even numbers
*/

int main()
{
	int i,num;
	puts("Enter any number : ");
	scanf("%d",&num);
	printf("The first %d even numbers are :",num);
	for(i=0;i<num;i++)
	{
		printf(" %d",2*i);
	}
	return 0;
}
