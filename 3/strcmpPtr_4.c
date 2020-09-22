#include <stdio.h>

/*
	File name : strcmpPtr_4.c
	Day 	  : 4
	Purpose   : Implement the strcmp using pointers
*/

int cmpString(char *,char *);

int main()
{
	char str1[80],str2[80];
	puts("Enter any name : ");
	fgets(str1,79,stdin);
	puts("Enter any name : ");
	fgets(str2,79,stdin);
	printf("The value after comparing two strings is %d\n" 
		"where if\n\tstring1 == string2 => 0\n\t"
		"string1 > string2 => Positive number\n\t"
		"string1 < string2 => Negative number\n", cmpString(str1,str2));
	return 0;
}

int cmpString(char *str1,char *str2)
{
 int i,temp;

for(i=0;str1[i]!='\0';i++)
 {
   temp = str1[i]-str2[i];
   if(temp==0)
     {
      continue;
     }
    else
     {
      return temp;
     }
}
return 0;
}
