#include <stdio.h>

/*
	File name : binary_7.c
	Day 	  : 3
	Purpose   : Decimal to binary
*/
void func(int);

int main()
{
	func(75);
	return 0;
}

void func(int k)
{
	int bin[39],count,i,temp,j,num=k;
	for(i=0;k != 0;i++)
	  {
	    bin[i]=k%2;
	     k /= 2;
	  }
          count =i-1;
	for(i=0,j=count;j>count/2;j--,i++)
	  {
	    temp=bin[i];
	    bin[i]=bin[j];
	    bin[j]=temp;
          }
	  printf("Binary representation of %d  is :",num);
          for(i=0;i <= count;i++)
	  {
	   printf("%d",bin[i]); 
          }
	  printf("\n");
}   
