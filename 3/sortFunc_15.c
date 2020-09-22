#include <stdio.h>
#include <stdlib.h>
/*
	File name : sortFunc_15.c
	Day 	  : 4
	Purpose   : Sort the array of integers using function pointer
*/

void read(int *a,int n);
void asort(int *a, int n);
void dsort(int *a, int n);
void print(int *a, int n);

int main()
{
	int **a,n,i,*num,choice;
	void (*p2f[2])(int *, int) = {&asort,&dsort};
	printf("Enter the number of rows : ");
	scanf("%d",&n);
	a=(int **)malloc(n*sizeof(int *));
	num=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
       	  printf("Enter the number of elements for %d row :\n",i+1);
	  scanf("%d",&num[i]);
	  a[i] = (int *)malloc(num[i] * sizeof(int));
	  printf("Enter the elements for %d row :\n",i+1);
	  read(a[i],num[i]);
	  puts("How do you want to sort this row?\n1. Ascending\t2.Descending ");
	  scanf("%d",&choice);
	  p2f[choice-1](a[i],num[i]);	
        }
	puts("The sorted arrays are:");
	for(i = 0;i<n;i++)
	{
		print(a[i],num[i]);
	}
	return 0;
}

void read(int *a,int n)
 {
   	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	 
  }
void asort(int *a,int n)
{
         int i,j,temp;
         for(i=0;i<n;i++)
	  {
		  for(j=0;j<n-1-i;j++)
		  {
			  if (a[j]>a[j+1])
			    {
				    temp=a[j+1];
				    a[j+1]=a[j];
				    a[j]=temp;
			    }
		  }
	   }
}
void dsort(int *a,int n)
{
         int i,j,temp;
         for(i=0;i<n;i++)
	  {
		  for(j=0;j<n-1-i;j++)
		  {
			  if (a[j]<a[j+1])
			    {
				    temp=a[j+1];
				    a[j+1]=a[j];
				    a[j]=temp;
			    }
		  }
	   }
}
void print(int *a,int n)
{
   int i;		
   for(i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		                                        
		}
		printf("\n");
		
}
