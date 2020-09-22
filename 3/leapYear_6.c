#include <stdio.h>
#include <stdlib.h>

/*
	File name :leapYear_6.c
	Day 	  : 3
	Purpose   :Finding the leap year
*/

int main(int argc,char *argv[])
{
	if(argc == 2)
	{
		int year;
		if(!sscanf(argv[1],"%d",&year))
		{
			puts("Entered year is not a number");
			exit (1);
		}
		if((year%400==0) || (year%100!=0 && year%4==0))
		{
		  printf("%d is a leap year",year);
		}
        	else
		{
		  printf("%d is not a leap year",year);
		}
	}
	else
	{
		printf("Enter the year in the format : leapyear <year>");
 	}
	return 0;
}
