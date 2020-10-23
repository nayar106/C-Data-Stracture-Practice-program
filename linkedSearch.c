#include<stdio.h>
#include<stdlib.h>
void create();
void search();
struct num
{
	int no;
	struct num *next;
};
struct num *start=NULL,*temp,*node;
void main()
{
	create();
	int choice;
    while(1)
	{
    	 printf("\nPress 0 to exit:");
     printf("\nPress 1 to search element:");
     printf("\nPress 2 for continue:");
     scanf("%d",&choice);
     if(choice==0)
      exit(1);
    else if(choice==1)
      search();
    else if(choice==2)
      create();
    else
      printf("\nInvalid input");
	}
    
}
void create()
{
	int n,i;
  printf("Enter no of element you want to insert:");
  scanf("%d",&n);
  printf("Enter %d element:\n",n);
  for(i=0;i<n;i++)
  {
  node=(int*)calloc(n,sizeof(int)); 
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
}
}
void search()
{ 
  int value,f=0,i=0;
  printf("Enter an element to be search:");
  scanf("%d",&value);
  for(temp=start;temp!=NULL;temp=temp->next)
  {
  	i=i+1;
  	if(temp->no==value)
  	{
  	  f=1;
  	  break;
	}
  }
  
  if(f==1)
    printf("\nElement is found at %d position\n",i);
  else
     printf("\nElement is not found\n");	
}

