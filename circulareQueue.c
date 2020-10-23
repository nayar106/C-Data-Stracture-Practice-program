/*WAP to create a circular queue and display all elements.*/
#include<stdio.h>
#include<stdlib.h>
struct queue
{
	int no;
	struct queue *next;
};
typedef struct queue q;
q *front=NULL,*rear=NULL;
void enqueue();
void show();
int main()
{
	int choice;
	do
	{
		printf("\nPress 1 for insert element");
		printf("\nPress 2 for show element");
		printf("\nPress 0 for exit");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		if(choice==1)
		{
			enqueue();
		}
		else if(choice==2)
		{
			show();
		}
	}while(choice!=0);
	
}
void enqueue()
{
	q *node;
	node=(q*)malloc(sizeof(q));
	printf("Enter element in queue:");
	scanf("%d",&node->no);
	node->next=NULL;
	if(front==NULL)
	{
		front=node;
		rear=node;
	}
	else
	{
		rear->next=node;
		rear=rear->next;
	}
	if(rear->next==NULL)
	{
		rear->next=front;
	}
}
void show()
{
	q *temp;
	int n;
	temp=front;
	do{
		printf("%d\n",temp->no);
		printf("\nPress 1 for next element:");
		printf("\nPress 0 for close:");
		printf("\nEnter your choice:");
		scanf("%d",&n);
		if(n==1)
		 temp=temp->next;
		else if(n==0)
		 break;
	}while(n!=0);
	
}
