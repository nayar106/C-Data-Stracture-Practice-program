#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n,value,index,f=0;
	printf("Enter length of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter element in an array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter an element where  you want to add new element:");
	scanf("%d",&value);
	n++;
	for(i=0;i<n;i++)
	{
		if(a[i]==value)
		{
		  f=1;
		  break;	
		}
		else
		  f=0;
	}
	if(f==0)
	{
		printf("\nElement does not exist\n");
		exit(1);
	}
	index=i;
	for(i=n;i>=index;i--)
	{
		a[i+1]=a[i];
	}
	a[index]=value;
	printf("Element after updation:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
