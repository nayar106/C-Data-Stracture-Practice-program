#include<stdio.h>
int stack[1000];
int top=-1;
void push();
void pop();
void search(int);
void main()
{
	int n,value;
	do{
		printf("\npress 1 to create:\n");
		printf("press 2 to show:\n");
		printf("press 3 to search:\n");
		printf("press 0 to close:\n");
		printf("Enter your choice:");
		scanf("%d",&n);
		if(n==1)
		{
		
			push();
		}
		else if(n==2)
		{
			pop();
		}
		else if(n==0)
		{
			break;
		}
		else if(n==3)
        {
        	printf("Enter element you want to search:");
        	scanf("%d",&value);
        	search(value);
		}
		else
		{
			printf("\nInvalid input");
		}
	}while(n!=0);
}
void push()
{
	if(top==999)
	 printf("\nstack is overflow\n");
	else
	{
		int n;
		printf("\nHow many element you want to store:");
		scanf("%d",&n);
		top++;
		printf("Enter roll no:\n");
		for(;top<n;top++)
		{
			
			scanf("%d",&stack[top]);
		}
	}
}
void pop()
{
	if(top==-1)
	 printf("\nstack is underflow");
	else
	{
		top--;
		for(;top>=0;top--)
		{
			printf("%d\n",stack[top]);
		}
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


