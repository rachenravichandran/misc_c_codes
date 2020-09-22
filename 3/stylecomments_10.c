#include <stdio.h>
#include <string.h>

/*
	File name :stylecomments_10.c
	Day 	  : 3
	Purpose   :Remove the comments
*/

int main()
{
	char str[1000],i=0;
	printf("Enter any line :\n");
	while((str[i] = getchar())!=EOF)
	{
		i++;
	}
        str[i] = '\0';
	i=0;
	while(str[i]!='\0')
	 {
	   if(str[i]=='/' && str[i+1]=='/')
	     {
		while(str[i]!='\n')
		{
			str[i]='\a';
			i++;
		}
	     }
	     if(str[i]=='/' && str[i+1]=='*')
             {
	     	while(str[i]!='\0')
	   	{
	      		if(str[i]=='*' && str[i+1]=='/')
              		{	
				str[i]=str[i+1]='\a';  
				i++;
				break;
	      		}
              		str[i] = '\a';
              		i++;
           	}
             }
             i++;
	 } 
	printf("The comment removed string is\n%s",str);	
        return 0;
}
