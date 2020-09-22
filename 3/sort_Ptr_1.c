#include <stdio.h>

/*
	File name : sort_Ptr_1.c
	Day 	  : 3
	Purpose   : Sort the elements of an array using int * func.
*/
int* sort(int a[],int n);

int main()
{
	int a[20],*b,n,i;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	puts("Enter the elements :");
        b = sort(a,n);
	printf("The sorted elements in main function are :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",b[i]);
	}
	printf("\n");
	return 0;
}

int* sort(int a[],int n)
 {
   	int i,j;
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
		printf("The sorted elements inside the function are :\n");
		for(i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		                                        
		}
		printf("\n");
		return a;
}
