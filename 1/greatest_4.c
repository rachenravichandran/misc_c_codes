#include<stdio.h>
int main()
{
	int a,b,c,largest;

	puts("Input three different integers:");
	scanf("%i%i%i",&a,&b,&c);
	largest = a>b?(a>c?a:c):(b>c?b:c);
	printf("Largest is %i",largest);

	return 0;
}
