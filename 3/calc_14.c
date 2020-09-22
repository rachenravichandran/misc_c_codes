#include <stdio.h>
#include <math.h>

/*
	File name : calc_14.c
	Day 	  : 3
	Purpose   : Implement calculator functions using pointer
*/

float add (float a, float b)
{
	puts("Addition");
	return a+b;
}

float sub (float a, float b)
{
	puts("subtraction");
	return a-b;
}

float mod (float a, float b)
{
	puts("Modulus");
	return (int)a%(int)b;
}

float xsqrt (float a)
{
	puts("Square Root");
	return sqrtf(a);
}

float xcube (float a)
{
	puts("Cube");
	return a*a*a;
}

float xsqr (float a)
{
	puts("Square");
	return a*a;
}

int main()
{
	int i;
	char choice;
	float (* p2f_2[3]) (float , float)={&add,&sub,&mod},a,b;
	float (* p2f_1[3]) (float ) = {&xsqr,&xcube,&xsqrt};
	while(1)
	{
		system("clear");
		printf("\t\tCalculator\nEnter your option:\n1. Add\t\t2. Sub\t\t3. Mod\n"
		       "4. Square\t5. Cube\t\t6. Sqrt\n");
		scanf("%d",&i);	
		if(i>0 && i<4)
		{
			puts("Enter two numbers:");
			scanf("%f%f",&a,&b);
			printf("%f\n",p2f_2[i-1](a,b));
		}
		else if(i>3 && i<7)
		{
			puts("Enter the number");
			scanf("%f",&a);
			printf("%f\n",p2f_1[i-4](a));
		}
		else
		{
			printf("Invalid Option\n");
		}
		puts("Do you want to continue (y)?");
		__fpurge(stdin);
		scanf("%c",&choice);
		if(choice == 'Y' || choice == 'y')
		{
			continue;
		}
		else
		{
			break;
		}
	}
	return 0;
}
