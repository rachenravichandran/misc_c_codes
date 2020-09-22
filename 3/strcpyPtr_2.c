#include <stdio.h>

/*
	File name : strcpyPtr_2.c
	Day 	  : 3
	Purpose   : Implement the strcpy using pointers
*/
void copyString(char *,char *);
int main()
{
	char str1[80],str2[80];
	puts("Enter any name : ");
	fgets(str1,79,stdin);
	copyString(str2,str1);
 	printf("Copied string is :%s",str2);
	return 0;
}
void copyString(char *str2,char *str1)
{
 int i=0;
 while((*(str2+i)=*(str1+i))!='\0')
 {
  i++;
 }
}
