#include <stdio.h>

/*
	File name : 7_equilateral.c
	Day 	  : 1
	Purpose   : Print an equilateral triangle with '*' as the pattern
*/

int main()
{
	int i,j,k,num = 10;
	
	for(i=1;i<=num;i++)
	{	
		for(j=0; j < num - i; j++)
		{
			printf(" ");
		}
		for(k=1;k <= 2*i - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
