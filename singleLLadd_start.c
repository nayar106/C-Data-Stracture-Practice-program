#include<stdio.h>
#include<stdlib.h>
void create(int);
void insert(int);
void show();
struct num
{
	int no;
	struct num *next;
};
struct num *start,*temp,*node,*new;
void main()
{
	int n,data;
	printf("Enter total no of node:");
	scanf("%d",&n);
	create(n);
}
void create(int n)
{
	int i,data;
	node=(struct num*)malloc(sizeof(struct num));
	if(node==NULL)
	{
		printf("Unable to allocate memory");
		
	}
	else
	{
		
	printf("Enter element in node 1:");
	scanf("%d",&data);
	start->no=data;
	start->next=NULL;
	temp=start;
	for(i=2;i<=n;i++)
	{
		new=(struct num *)malloc(sizeof(struct num));
		if(new==NULL)
		{
			printf("Unable to allocate memory");
			break;
		}
		else
		{
		printf("Enter the data of node %d",i);
		scanf("%d",&data);
		new->no=data;
		new->next=NULL;
		temp->next=new;
		temp=temp->next;
		}	
	}
	printf("\nSingly linked list created successfully\n");
  }	
	
}
