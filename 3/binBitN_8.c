#include <stdio.h>

/*
	File name : binBitN_8.c
	Day 	  : 3
	Purpose   : Decimal to binary
*/
void func(int,int);

int main()
{
	func(75,4);
	return 0;
}

void func(int k,int n)
{
	int bin[39],count,i,temp,j,num=k;
	for(i=0;k != 0;i++)
	  {
	    bin[i]=k%2;
	     k /= 2;
	  }
          count =i-1;
	  printf("The %d bit in %d is %d",n,num,bin[n-1]);
}   
