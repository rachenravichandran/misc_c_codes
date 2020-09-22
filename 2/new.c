#include<stdio.h>

void inc(void);
int main()
{
int a,b,c;
printf("%d %d %d\n",a,b,c);
a=0;
{int a,b,c;
printf("%d %d %d\n",a,b,c);}
while(a<30)
{
	inc();
	a++;
}
return 0;
}

void inc(void)
{
	int a,b,c;
	printf("---%d  %d    %d\n",a,b,c);
	a++;b++;c++;
}
