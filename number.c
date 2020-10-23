#include<stdio.h>
void prime();
void even();
void fact();
int main()
{
	int check;
 do{	
  printf("\npress 1 to check prime:");
  printf("\npress 2 to check even:");
  printf("\npress 3 to display factorial:");
  printf("\npress 0 to exit:");
  scanf("%d",&check);
  if(check==1)
  {
  	prime();
  }	
  else if(check==2)
  {
  	even();
  }
  else if(check==3)
  {
  	fact();
  }
}while(check!=0);
}
void prime()
{
	int i,n,flag=0;
	printf("Enter a positive number:");
	scanf("%d",&n);
	if(n==0&&n==1)
	 printf("Given number is not a prime");
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	 printf("Given number is not a prime");
	else
	  printf("Given number is a prime");
}
void even()
{
	int n,even;
	printf("Enter a natural number:");
	scanf("%d",&n);
	if(n%2==0)
	 printf("This is an even number");
	else
	 printf("This is not an even number");
}
void fact()
{
	int i,n,fact=1;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial is:%d",fact);
}
