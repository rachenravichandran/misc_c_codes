#include <stdio.h>

/*
	File name : polynomial_11.c
	Day 	  : 1
	Purpose   : Evaluate 2a*5b+c-6d*5c
*/

int main()
{	
	int a,b,c,d,expr;
	puts("Enter any 4 numbers:");
	scanf("%i%i%i%i",&a,&b,&c,&d);
	expr = 2*a*5*b + c - 6*d*5*c;
	printf("(2x%d x 5x%d) + %d - (6x%d x 5x%d) = %d",a,b,c,d,c,expr);
	return 0;
}
