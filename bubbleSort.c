/*Bubble sort*/
#include<stdio.h>
void main()
{
	int i,j,n,temp,arr[100];
	printf("Enter no of element you want to store:");
	scanf("%d",&n);
	printf("Enter %d element:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nElement before sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
		   if(arr[j]>arr[j+1])
		   {
		     temp=arr[j];
			 arr[j]=arr[j+1];
			 arr[j+1]=temp;	
		   }	
		}
	}
	printf("\nElement After sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	
}
