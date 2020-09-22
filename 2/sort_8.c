#include <stdio.h>

/*
	File name : sort_8.c
	Day 	  : 2 
	Purpose   : Sort the elements of an array
*/

int main()
{
	int a[20],i,j,n;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	puts("Enter the elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	  for(i=0;i<n;i++)
	  {
		  for(j=0;j<n-1-i;j++)
		  {
			  if (a[j]>a[j+1])
			    {
				    int temp;
				    temp=a[j+1];
				    a[j+1]=a[j];
				    a[j]=temp;
			    }
		  }
	   }
		printf("The sorted elements are :");
		for(i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		                                        
		}
		return 0;
}
