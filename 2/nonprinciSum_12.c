#include <stdio.h>
#include "arrayFunctions.h"

/*
	File name : nonprinciSum_11.c
	Day 	  : 2
	Purpose   : Find the sum of non-principle diagonal elements
*/

int main()
{
	int a[25][25],i,j,n,sum=0;
	puts("Enter the order of matrix:");
	scanf("%d",&n);
	puts("Enter the elements of matrix A");
	readArray(a,n,n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++) 	
		{ 
		if(i!=j)
		    {
			sum = sum+a[i][j];
		    }   
	}       }
	printf("Sum of non principle diagonal elements =%d\n",sum);
	return 0;
}
