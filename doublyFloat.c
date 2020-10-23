#include<stdio.h>
#include<stdlib.h>
void create();
void show();
struct std
{
	float no;
	struct std *next;
	struct std *prev;
};
struct std *start=NULL,*temp,*node;
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
		node=(struct std*)malloc(sizeof(struct std));
		printf("\nEnter Number:");
		scanf("%f",&node->no);
		node->prev=NULL;
		node->next=NULL;
		if(start==NULL)
		{
			temp=node;
			start=node;
		}
		else
		{
			temp->next=node;
			node->prev=temp;
			temp=temp->next;
		}
		printf("\nDo you want to continue:");
		fflush(stdin);
		scanf("%c",&choice);
	
	}while(choice=='y'||choice=='Y');
	
}
void show()
{
	int n;
	temp=start;
	while(temp!=NULL)
	{
		printf("%.2f",temp->no);
		printf("\nPress 2 for next element:");
		printf("\nPress 1 for previous element:");
		scanf("%d",&n);
		if(n==1)
		{
			temp=temp->prev;
		}
		else if(n==2)
		{
			temp=temp->next;
		}
		else
		 {
		 	printf("\nInvalid input");
		 }
		if(temp->next==NULL)
		{
			printf("\nYou reach first or last number");
		}
	}
}
