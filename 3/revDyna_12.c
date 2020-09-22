#include <stdio.h>
#include <stdlib.h>
/*
	File name : revDyna_12.c
	Day 	  : 3
	Purpose   : Reverse a dynamic array
*/

int main()
{
	int *arr,count,i,temp,j;
 	printf("Enter the number of elements :");
	scanf("%d",&count);
	arr=(int *)malloc(count*sizeof(int));
	puts("Enter the  numbers");
	for(i=0;i<count;i++)
	{
          scanf("%d",arr+i);
	}
	count -= 1;
        for(i=0,j=count;j>count/2;j--,i++)
	  {
	    temp=arr[i];
	    arr[i]=arr[j];
	    arr[j]=temp;
          }
	  printf("The reversed array :");
          for(i=0;i <= count;i++)
	  {
	   printf("%d ",arr[i]); 
          }
	  printf("\n");
          return 0;
}   
