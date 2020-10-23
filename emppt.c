#include<stdio.h>
#include<stdlib.h>
struct emp
{

	int empid;
	char name[25];
	float sal;
};
struct emp *ptr;
void main()
{
	int choice,n,i;
  ptr=(int*)malloc(sizeof(int));
  printf("Enter no of employee:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  	printf("Enter elployee Id:");
  scanf("%d",&(ptr+i)->empid);	
  printf("Enter elployee name:");
  scanf("%s",&(ptr+i)->name);
  printf("Enter elployee Salary:");
  scanf("%f",&(ptr+i)->sal);
  }
  printf("Employee Id\tEmployee name\tEmployee salary\n");
  	for(i=0;i<n;i++)
  	{
  		printf("%d\t\t%s\t%.2f",(ptr+i)->empid,(ptr+i)->name,(ptr+i)->sal);
  		printf("\n");
	}
  	
  }


