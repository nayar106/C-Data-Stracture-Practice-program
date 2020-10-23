#include<stdio.h>
#include<stdlib.h>
struct std
{
	int rno;
	struct std *next;
};
struct std *start=NULL,*temp,*node;
void insert();
void show();
void addAtbegining();
void addAtIntermediate();
void addAtend();
void modifyAtbegining();
void modifyAtintermediate();
void modifyAtend();
void deleteAtbegining();
void deleteAtintermediate();
void deleteAtend();
void main()
{
   int n;
   do{
   	printf("==========================================");
   	printf("\nPress 0 to close:");
   	printf("\nPress 1 to create list:");
   	printf("\nPress 2 to display elements:");
   	printf("\nPress 3 to add at begining:");
   	printf("\nPress 4 to add at specific position:");
   	printf("\nPress 5 to add at end:");
   	printf("\nPress 6 to modify at begining:");
   	printf("\nPress 7 to modify at specific position:");
   	printf("\nPress 8 to modify at end:");
   	printf("\nPress 9 to delete at begining:");
   	printf("\nPress 10 to delete at specific position:");
   	printf("\nPress 11 to delete at end:");
   	printf("\n==========================================\n");
   	printf("\nEnter choice:");
   	scanf("%d",&n);
   	printf("\n==========================================\n");
   	if(n==1)
   		insert();
   	else if(n==2)
   	 show();
   	else if(n==3)
   	 addAtbegining();
   	else if(n==4)
   	  addAtIntermediate();
   	else if(n==5)
   	  addAtend();
   	else if(n==6)
   	  modifyAtbegining();
   	else if(n==7)
   	  modifyAtintermediate();
   	else if(n==8)
   	  modifyAtend();
   	else if(n==9)
   	  deleteAtbegining();
   	else if(n==10)
   	  deleteAtintermediate();
   	else if(n==11)
   	   deleteAtend();
   	else
   	  printf("\nInvalid input");
   }while(n!=0);	
}
void insert()
{
	node=(struct std*)malloc(sizeof(struct std));
	printf("Enter a number:");
	scanf("%d",&node->rno);
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
void show()
{
	struct std *t;
	t=start;
	printf("Elements are:\n");
	for(;t!=NULL;t=t->next)
	{
		printf("%d\t",t->rno);
	}
	printf("\n");
}
void addAtbegining()
{
	node=(struct std*)malloc(sizeof(struct std));
	printf("Enter a number:");
	scanf("%d",&node->rno);
	node->next=NULL;
	node->next=start;
	start=node;
	printf("\nElenent added successfully at begining\n");
}
void addAtIntermediate()
{
	int pos,c=0;
	struct std *t;
	node=(struct std*)malloc(sizeof(struct std));
	printf("Enter a number:");
	scanf("%d",&node->rno);
	node->next=NULL;
	printf("Enter a position where you want to add:");
	scanf("%d",&pos);
	if(pos==1)
	{
		printf("\nSelect key 3 to add element at 1st position\n");
		exit(1);
	}
	pos--;
	t=start;
	for(c=1;c<=pos-1;c++)
	{
		t=t->next;
		if(t==NULL)
		break;
	}
	if(t!=NULL)
	{
		node->next=t->next;
		t->next=node;
	}
	printf("\nElenent added successfully at intermediate\n");
}
void addAtend()
{
	struct std *t;
	node=(struct std*)malloc(sizeof(struct std));
	printf("Enter a number:");
	scanf("%d",&node->rno);
	node->next=NULL;
	t=temp;
	t->next=node;
	t=t->next;
	printf("\nElenent added successfully at end\n");
}
void modifyAtbegining()
{
	
	struct std *t;
	node=(struct std*)malloc(sizeof(struct std));
	printf("\nEnter a new element:");
	scanf("%d",&node->rno);
	node->next=NULL;
    start->rno=node->rno;
    printf("\nUpdated successfully at begining\n");		
}
void modifyAtintermediate()
{
	int pos,i;
	struct std *t;
	node=(struct std*)malloc(sizeof(struct std));
	printf("\nEnter a new element:");
	scanf("%d",&node->rno);
	node->next=NULL;
	printf("\nEnter a position where you want to modify:");
	scanf("%d",&pos);
	if(pos==1)
	{
		printf("\nSelect key 6 to modify element at 1st position\n");
		exit(1);
	}
	t=start;
	for(i=1;i<pos;i++)
	{
		t=t->next;
		if(t==NULL)
		break;
	}
	if(t!=NULL)
	{
		t->rno=node->rno;
	}
	printf("\nUpdated Successfully at intermediate\n");
	
}
void modifyAtend()
{
	
	node=(struct std*)malloc(sizeof(struct std));
	printf("\nEnter a new element:");
	scanf("%d",&node->rno);
	node->next=NULL;
	temp->rno=node->rno;
	printf("\nUpdated Successfully at end\n");
}
void deleteAtbegining()
{
	struct std *t;
	t=start;
	start=start->next;
	free(t);
	printf("\nDeleted Successfully at begining\n");
}
void deleteAtintermediate()
{
	int pos,i;
	struct std *a,*a1,*a2;
	node=(struct std*)malloc(sizeof(struct std));
	printf("\nEnter a position where you want to delete element:");
	scanf("%d",&pos);
	if(pos==1)
	{
		printf("\nSelect key 9 to delete at 1st position\n");
		exit(1);
	}
	a=start;
	for(i=1;i<pos-1;i++)
	{
		a=a->next;
		if(a==NULL)
		break;
	}
	if(a!=NULL)
	{
		
		a1=a;
		a=a->next;
		a2=a;
		a=a->next;
		a1->next=a;
		free(a2);
	}
	printf("\nDeleted Successfully at intermediate\n");
}
void deleteAtend()
{
	int pos;
	struct std *t1,*t2;
	t1=start;
    for(;t1!=NULL;t1=t1->next)
    {
    	t2=t1;
    	t1=t1->next;
	}
	t2->next=NULL;
	free(t1);
	printf("\nDeleted Successfully at the end\n");	
}
