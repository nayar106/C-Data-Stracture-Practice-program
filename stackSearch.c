#include<stdio.h>
#include<stdlib.h>
int stack[100];
top=-1;
void push(int);
void search(int);
void show();
void main()
{
	int rno,value,choice;
	do
	{
	printf("press 1 for insert roll no in stack");
	printf("\nPress 2 for search roll no ");
	printf("\nPress 3 for show");
	printf("\nPress 0 for exit");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	if(choice==1)
	{
	printf("Enter roll no:");
	scanf("%d",&rno);
	push(rno);
	}
	else if(choice==2)
	{
      printf("Enter an element you want to search:");
	  scanf("%d",&value);
	search(value);
	}
	else if(choice==3)
	 show();
 }while(choice!=0);
}
void push(int rno)
{
	if(top==99)
	{
		printf("stack is overflow");		
	}
	else
	{
		top++;
		stack[top]=rno;
	}
}
void show()
{
	printf("\Elements are:");
	top--;
		for(;top>=0;top--)
		{
			printf("%d\n",stack[top]);
		}
}
void search(int value)
{
	int f=0;
	if(top==-1)
	{
		printf("stack is underflow");
	}
	else
	{
		top--;
		for(;top<=0;top--)
		{
			if(stack[top]==value)
			{
				
				f=1;
				break;
			}
		}
		if(f==1)
		 printf("\nElement found successfully\n");
		else
		  printf("\nElement not found\n");
		  
	}
	
}


