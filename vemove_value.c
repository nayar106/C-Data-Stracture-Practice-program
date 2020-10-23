#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n,value,index,f=1;
	printf("Enter length of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter element in an array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter value of element you want to remove:");
	scanf("%d",&value);
	for(i=0;i<n;i++)
	{
	  if(a[i]==value)
	   break;
	  else
	   f=0;	
	}
	if(f==0)
	{
		printf("\nElement does not exist\n");
		exit(1);
	}
	a[i]=value;
	index=i;
	for(i=index;i<n;i++)
	{
		a[i]=a[i+1];
	}
	printf("Element after remove:\n");
	for(i=0;i<(n-1);i++)
	{
		printf("%d\n",a[i]);
	}
}
