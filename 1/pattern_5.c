#include <stdio.h>

/*
	File name : 5_pattern.c
	Day 	  : 1
	Purpose   : Print a triangular pattern
*/

int main()
{
	int i,j;
	for(i=0;i<10;i++)
	{
	 for(j=0;j<=i;j++)
	 {
		printf("*");
	 }
	 printf("\n");
	}
	return 0;
}
