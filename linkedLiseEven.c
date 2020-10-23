#include<stdio.h>
#include<stdlib.h>
void create();
void show();
struct num
{
	int no;
	int *next;
};
struct num *start=NULL,*temp,*node;
void main()
{
  	create();
  	show();
}
void create()
{
	char choice;
	do
	{
		node=(struct num*)malloc(sizeof(struct num));
		printf("Enter a number:");
		scanf("%d",&node->no);
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
		printf("Press y  to continue:");
		fflush(stdin);
		scanf("%c",&choice);
	}while(choice=='Y'||choice=='y');	
}
void show()
{
	int f=0;
	printf("\nEven no are:");
	for(temp=start;temp!=NULL;temp=temp->next)
	{
		if(temp->no%2==0)
	      printf("\n%d",temp->no);
	}
		 
}


