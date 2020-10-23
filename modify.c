#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n,index,value,ar[500];
	printf("Enter how many element you want to store:");
	scanf("%d",&n);
	printf("\nEnter %d element:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("\nEntered element is:");
	for(i=0;i<n;i++)
	{
		printf("%d\n",ar[i]);
	}
	printf("Enter index you want to change:");
	scanf("%d",&index);
	if(index>n)
	{
		printf("\nIndex does not exist\n");
		exit(1);
	}
	printf("Enter value you want to modify:");
	scanf("%d",&value);
	ar[index]=value;
	printf("\nElement after modification:");
	for(i=0;i<n;i++)
	{
		printf("%d\n",ar[i]);
	}
}
