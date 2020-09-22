#include <stdio.h>
#include "arrayFunctions.h"

/*
	File name : sumMatrix_9.c
	Day 	  : 2
	Purpose   : Sum of two matrices
*/

int main()
{
	int a[25][25],b[25][25],c[25][25],i,j,m,n;
	puts("Enter the order of matrix:");
	scanf("%d %d",&m,&n);
	puts("Enter the elements of matrix A");
	readArray(a,m,n);
	puts("Enter the elements of matrix B");
	readArray(b,m,n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	puts("The sum matrix of matrices A and B are");
	printArray(c,m,n);
	return 0;
}
