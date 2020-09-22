#include <stdio.h>
#include <stdlib.h>

/*
	File name : trans_11.c
	Day 	  : 3
	Purpose   : Transpose of a matrix
*/

int main()
{
	int **a,**aT,i,j,m,n;
	puts("Enter the order of matrix:");
	scanf("%d %d",&m,&n);
	
	a = (int **)malloc(m * sizeof(int *));
	aT = (int **)malloc(n * sizeof(int *));
	for(i=0;i<m;i++)
	{
		a[i] = (int *)malloc(n * sizeof(int ));
	}
	for(i=0;i<n;i++)
	{
		aT[i] = (int *)malloc(m * sizeof(int ));
	}
	
	puts("Enter the elements of matrix A");
	for (i=0;i<m;i++)
	{ 	
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			aT[j][i] = a[i][j];
		}
	}
	
	puts("The Transposed matrix of A is");
	for (i=0;i<n;i++)
	{ 
		for(j=0;j<m;j++)
		{
			printf("%d  ",aT[i][j]);
			free(a[j]);
		}
		puts("");
		free(aT[i]);
	}
	free(aT);
	free(a);
	return 0;
}
