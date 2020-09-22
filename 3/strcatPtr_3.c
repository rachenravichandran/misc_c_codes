#include <stdio.h>

/*
	File name : strcatPtr_3.c
	Day 	  : 3
	Purpose   : Implement the strcat using pointers
*/
void catString(char *,char *);
int main()
{
	char str1[80],str2[80];
	puts("Enter any name : ");
	gets(str1);
	puts("Enter another name : ");
	gets(str2);
	catString(str2,str1);
 	printf("Concatenated string is :%s",str2);
	return 0;
}
void catString(char *str2,char *str1)
{
 while(*str2!='\0')
 {
   str2++;
 }
 while(*str1!='\0')
 {
   *str2=*str1;
   str1++;
   str2++;
 }
 *str2 = '\0';
}
