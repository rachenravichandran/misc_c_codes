#include <stdio.h>

/*
	File name : 8_grade.c
	Day 	  : 1
	Purpose   : Find the average of three scores and print the grade
*/

int main()
{
	int a,b,c,avg;
	printf("Enter the three scores :\n");
	scanf("%d%d%d",&a,&b,&c);
	avg=(((a+b+c)/3));
	printf("GRADE is :");
	if(avg>=90)
	 {
		 puts("A");
	 }
	 else if(avg>=70 && avg<90)
	 {
		 puts("B");
	 }
	 else if(avg>=50 && avg<70)
	 {
		 puts("C");

	 }
	 else
	 {
		 puts("F");
	 }
	return 0;
}
