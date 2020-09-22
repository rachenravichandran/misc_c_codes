#include <stdio.h>

/*
	File name : 1_fact.c
	Day 	  : 1
	Purpose   : Find the factorial
*/

int fact(int );

int main()
{	
	int i,j;

	for(i = 1; i <= 7 ; i++)
	{
		printf("The factorial of %d is ",i);
		for( j = 1 ; j < i ; j++)
		{
			printf ("%d * ",j);
		}
		printf("%d = %d",i,fact(i));
		printf("\n");
	}

	return 0;
}

int fact(int num)
{
	if(num == 1)
	{
		return 1;
	}
	else
	{
		return(num * fact(num - 1));
	}
}
