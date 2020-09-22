#include <stdio.h>
#include <string.h>
/*
	File name :Struct_2.c
	Day 	  : 5
	Purpose   : Location of crew members
*/

struct CREW
	{
	int crewId;
	char name[30];
	int age;
	char grade;
	float salary;
	struct location
		{
			char city[25],state[25];
			int pin;
		}addr;
	};  
	
void readStruct(struct CREW *);
void printDetails(struct CREW *,int );
void salaryCrew(struct CREW *, int);
void searchName(struct CREW *, int);
void incrementSal(struct CREW *, int);
void deleteCrew(struct CREW *, int *);
void displayCity(struct CREW *, int );
	    
int main()
{
	int n,i,ch;
	char choice;
	
	system("clear");
	printf("Enter the Number of crews :\n");
	scanf("%d",&n);
	struct CREW members[n];
	for(i=0;i<n;i++)
	 {
	     system("clear");
             printf("Enter the details of member %d :\n",i+1);
 	     readStruct(&members[i]);
	 }
	
	while(1)
	{
		system("clear");
		printf("Enter your choice\n1. Print the Crew database\n"
		       "2. Display all crew whose salary is more than 15000\n"
		       "3. Search for a name in BU\n"
		       "4. Increase a salary for a particular employee by 5000\n"
		       "5. Delete the data for a particular crew member\n"
		       "6. Display the details of a crew member from a particular city\n\n");
		scanf("%d",&ch);
 		switch(ch)
		{
			case 1:
			   printDetails(members,n);
			   break;
			case 2:
			   salaryCrew(members,n);
			   break;
			case 3:
			   searchName(members,n);
			   break;
			case 4:
			   incrementSal(members,n);
			   break;
			case 5:
			   deleteCrew(members, &n);
			   break;
			case 6:
			   displayCity(members, n);
			   break;	
			default:
			   printf("Invalid option");
		}
		puts("Do you want to continue?(y)\n");
		__fpurge(stdin);
		scanf("%c",&choice);	   
		if( choice == 'Y' || choice == 'y')
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

void readStruct(struct CREW *mem)
{
	puts("Enter the crew id:");
	scanf("%d",&(mem->crewId));
	puts("Enter the member name:");
	__fpurge(stdin);
	scanf("%[^\n]s",mem->name);
	puts("Enter the age:");
	scanf("%d",&(mem->age));
	__fpurge(stdin);
	puts("Enter the grade:");
	scanf("%c",&(mem->grade));
	puts("Enter the salary:");
	scanf("%f",&(mem->salary));
	puts("Enter the city:");
	__fpurge(stdin);
	scanf("%[^\n]s",mem->addr.city);	
	puts("Enter the state:");
	__fpurge(stdin);
	scanf("%[^\n]s",mem->addr.state);
	puts("Enter the pincode:");
	scanf("%d",&(mem->addr.pin));	
}

void printMem(struct CREW *mem, int i)
{
	system("clear");
	printf("\t\tMember %d\nCrew id\t\t%d\nName\t\t%s"
	       "\nAge\t\t%d\nGrade\t\t%c\nSalary\t\t%f\nLocation\t%s, %s, %d\n\n",
               i+1,mem[i].crewId,mem[i].name,mem[i].age,mem[i].grade,mem[i].salary,
	       mem[i].addr.city,mem[i].addr.state,mem[i].addr.pin);
}

void printDetails(struct CREW *mem,int n)
{
	int i;
	system("clear");
	for(i=0;i<n;i++)
	{	
		printf("\t\tMember %d\nCrew id\t\t%d\nName\t\t%s"
		       "\nAge\t\t%d\nGrade\t\t%c\nSalary\t\t%f\nLocation\t%s, %s, %d\n\n",
                       i+1,mem[i].crewId,mem[i].name,mem[i].age,mem[i].grade,mem[i].salary,
	               mem[i].addr.city,mem[i].addr.state,mem[i].addr.pin);
	}
}

void salaryCrew(struct CREW *mem, int n)
{
	int i;
	system("clear");
	for(i=0;i<n;i++)
	{
		if(mem[i].salary > 15000)
		{
			printMem(mem,i);
		}
	}
}
void searchName(struct CREW *mem, int n)
{
	char search[30];
	int i;
	system("clear");
	puts("Enter the name to be searched:");
	__fpurge(stdin);
	scanf("%[^\n]s",search);
	for(i=0; i < n ;i++)
	{
		if(strcmp(search,mem[i].name) == 0)
		{
			printf("The name is found at %d\n",i+1);
			printMem(mem,i);
			return;
		}
	}
	printf("The name is not found\n");
}

void incrementSal(struct CREW *mem, int n)
{
	int num;
	system("clear");
	puts("Enter the member number to increment his/her salary by 5000");
	scanf("%d",&num);
	mem[num-1].salary += 5000;
	printMem(mem,num-1);
}

void deleteCrew(struct CREW *mem, int *n)
{	
	int i,num;
	system("clear");
	puts("Enter the member number to be deleted:");
	scanf("%d",&num);
	for( i = num-1; i < *n;i++)
	{
	  mem[i]=mem[i+1];
	}
 	*n -= 1;
}

void displayCity(struct CREW *mem, int n)
{
	char search[30];
	int i;
	system("clear");
	puts("Enter the city to be searched:");
	__fpurge(stdin);
	scanf("%[^\n]s",search);
	for(i=0; i < n ;i++)
	{
		if(strcmp(search,mem[i].addr.city) == 0)
		{
			printf("The city is found at %d\n",i+1);
			printMem(mem,i);
			return;
		}
	}
	printf("The city is not found\n");
}

