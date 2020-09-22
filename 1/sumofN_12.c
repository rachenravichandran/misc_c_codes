#include <stdio.h>

/*
	File name : sumofN_12.c
	Day 	  : 1
	Purpose   : Find the sum of N natural numbers
*/

int main()
{
	int num;
	puts("Enter any natural number :");
	scanf("%d",&num);
	printf("Sum of first %d natural numbers is %d\n",num,num*(num+1)/2);
	return 0;
}
