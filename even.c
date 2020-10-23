#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter no of element you want:");
	scanf("%d",&n);
	int ar[n];
	printf("Insert element in an array:\n");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&ar[i]);	
	}
	printf("Even no are:\n");
	for(i=0;i<n;i++)
	{
		if(ar[i]%2==0)
		{
			printf("%d\n",ar[i]);
		}
	}
}
