#include <stdio.h>

/*
	File name : sortString_13.c
	Day 	  : 4
	Purpose   : Sort the array of strings
*/

int cmpString(char *,char *);

int main()
{
	char **str,*temp;
	int i,n,j;
	puts("Enter the number of strings:");
	scanf("%d",&n);
	str = (char **)malloc(n * sizeof(char *));
	temp = (char *)malloc(50 * sizeof(char));
	puts("Enter the strings one by one");
	for(i = 0;i<n;i++)
	{
		str[i] = (char *)malloc(50 * sizeof(char));
		__fpurge(stdin);
		fgets(str[i],49,stdin);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(cmpString(str[j],str[j+1]) > 0)
			{
				temp = str[j];
				str[j] = str[j+1];
				str[j+1] = temp;
			}
		}
	}
	puts("The sorted strings are:");
	for(i=0;i<n;i++)
	{
		printf("%s",str[i]);
		free(str[i]);
	}
	free(str);
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
