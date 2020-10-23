#include<stdio.h>
void main()
{
	int n,i,min;
	printf("Enter no of element you want:");
	scanf("%d",&n);
	int ar[n];
	printf("Insert element in an array:\n");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&ar[i]);	
	}
	min=ar[0];
	for(i=1;i<n;i++)
	{
	   if(min>ar[i])
	    min=ar[i];	
	}
	printf("Minimum number of array=%d",min);
}
