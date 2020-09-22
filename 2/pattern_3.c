#include <stdio.h>

/*
	File name : printfunc_2.c
	Day 	  : 2 
	Purpose   : print char n times
*/
void printnchars(char,int);

int main()
{
	int a[10] = {1,2,5,4,10,15,28,12,9,7},i;

	for(i=0;i<10;i++)
	{	
		printf("%d: %d  ",i+1,a[i]);
		printnchars('*',a[i]);
	}
	return 0;
}

void printnchars(char ch,int n)
{
	while(n != 0)
	{
		printf("%c",ch);
		n--;
	}
	puts("");
}
