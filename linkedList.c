#include<stdio.h>
#include<stdlib.h>
void create();
void show();
struct std
{
	int rollno;
	 int *next;
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
		printf("Enter roll no:");
		scanf("%d",&node->rollno);
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
	for(temp=start;temp!=NULL;temp=temp->next)
	{
		printf("%d\n",temp->rollno);
	}
}


