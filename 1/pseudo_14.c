#include <stdio.h>

/*
	File name : pseudo_14.c
	Day 	  : 1
	Purpose   : Create a program for the pseudo code given
*/

int main()
{
	int x,y,p,s,total;
	
	puts("Enter x and y:");
	scanf("%d%d",&x,&y);
	p = x * y;
	s = x + y;
	total = s*s + p * (s-x) * (p+y);
	printf("Total is %d",total);
			
	return 0;
}
