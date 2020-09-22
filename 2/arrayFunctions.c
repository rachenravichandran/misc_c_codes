#include <stdio.h>
#include "arrayFunctions.h"
/*
	File name : arrayFunctions.c
	Day 	  : 2 
	Purpose   : Includes the array scan and print functions
*/

void readArray(int a[][25],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}

void printArray(int a[][25],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
