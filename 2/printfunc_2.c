#include <stdio.h>

/*
	File name : printfunc_2.c
	Day 	  : 2 
	Purpose   : print char n times
*/
void printnchars(char,int);

int main()
{
	printnchars('o',100);
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
