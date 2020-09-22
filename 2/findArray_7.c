#include <stdio.h>

/*
	File name : findArray_7.c
	Day 	  : 2
	Purpose   : Find whether an element is present in the array or not
*/

int main()
{
	int a[20],i,n,search,flag = 0;
	puts("Enter the number of elements :");
	scanf("%d",&n);
	puts("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	puts("Enter the element to be searched:");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(search == a[i])
		{
			printf("Found\n");
			flag = 1;
			break;
		}
	}
	if(flag != 1)
	{
		printf("Not Found\n");
	}
	return 0;
}
