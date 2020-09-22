#include <stdio.h>

/*
	File name : 2_fibo.c
	Day 	  : 1
	Purpose   : Find the Fibonacci series
*/

int fibo(int);

int main()
{
	int i;

	printf("The fibonacci series is ");
	for(i = 0; i < 10 ; i++)
	{
		printf("%d ",fibo(i));
	}
	printf("\n");	
	return 0;
}

int fibo(int num)
{
	if(num == 0 || num == 1)
	{
			  return num;
	}
	else
	{
			  return (fibo(num-1)+fibo(num-2));
	}
}

