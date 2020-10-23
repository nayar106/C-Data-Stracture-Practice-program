/*WAP to create a queue and display only that numbers which are full divided by 5*/
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
		else
		{
			printf("Invalid input");
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
	
}
void show()
{
	q *temp;
	printf("Elements which is divisible by 5\n");
	for(temp=front;temp!=NULL;temp=temp->next)
	{
		if(temp->no%5==0)
		{
			printf("%d\t",temp->no);
		}
		
	}
}
