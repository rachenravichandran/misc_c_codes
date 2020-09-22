#include <stdio.h>

/*
	File name : sumArray_1.c
	Day 	  : 2
	Purpose   : Sum of the elements of an integer array
*/

int main()
{
	int a[20],i,n,sum;
	puts("Enter the number of elements :");
	scanf("%d",&n);
	puts("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum += a[i];
	}
	printf("Sum of the elements are %d",sum);
	return 0;
}
