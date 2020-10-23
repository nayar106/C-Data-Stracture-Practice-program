#include<stdio.h>
#include<stdlib.h>
void input();
void result();
struct num
{
	int num;
	int *next;
};
struct num *start=NULL,*node,*temp;
void main()
{
  input();
  int choice;
  while(1)
  {
  	printf("\nPress 0 to exit:");
	printf("\nPress 1 to display sum:");
	printf("\nPress 2 to add more integer:");
	scanf("%d",&choice);
	if(choice==1)
	{
		result();
    }
    else if(choice==2)
    {
    	input();
	}
	 else if(choice==0)
	 {
	 	exit(1);
	 }
	 else
	  printf("\nInvalid input");
	}
  }	
void input()
{
	
   	node=(struct num*)malloc(sizeof(int));
   	printf("Enter an integer:\n");
   	scanf("%d",&node->num);
   	node->next=NULL;
   	if(start==NULL)
   	{
   		temp=node;
   		start=node;
	}
	else
	{
		temp->next=node;
		temp=temp->next;
	}
	
   	
}
void result()
{
	int sum=0;
	for(temp=start;temp!=NULL;temp=temp->next)
	{
       sum=sum+temp->num;
	}
	printf("Sum of integer:%d",sum);
}
