#include <stdio.h>

/*
	File name : minMax_6.c
	Day 	  : 2 
	Purpose   : Find the second maximum and second minimum
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
	    printf("Second maximum number is : %d\nSecond minimum number is :%d\n",a[n-2],a[1]);

	return 0;
}
