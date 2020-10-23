#include<stdio.h>
void main()
{
	int i,n,pos,value;
	printf("Enter length of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter element in an array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter an element which you want to add:");
	scanf("%d",&value);
	printf("Enter an position where you want to insert element:");
	scanf("%d",&pos);
	n++;
	pos--;
	for(i=n;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=value;
	printf("Element after updation:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
