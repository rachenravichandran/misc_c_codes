#include <stdio.h>
#include <string.h>

/*
	File name : freqNum_9.c
	Day 	  : 1
	Purpose   : Find the frequency of digits in a number
*/

int main()
{
	int i,num,count,temp;
	puts("Enter a number :");
	scanf("%d",&num);
	printf("The frequency of each number  in the string %d is\n",num);
	for(i=0;i<10;i++)
	{	
		if(num == 0)
		{
			printf("Digit:0  -   Frequency:1\n");
			break;
		}
		temp = num;
		count = 0;
		while(temp!=0)
		{
			if(i == temp%10)
			{
				count++;
			}
			temp = temp/10;
		}
		if(count != 0)
		{
			printf("Digit:%d  -   Frequency:%d\n",i,count);
		}
	}
	return 0;
}
