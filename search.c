#include<stdio.h>
void main()
{
	int n,i,item,f=0;
	printf("Enter no of element you want:");
	scanf("%d",&n);
	int ar[n];
	printf("Insert element in an array:\n");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&ar[i]);	
	}
	printf("Enter a number which you want to search:");
	scanf("%d",&item);
	for(i=0;i<n;i++)
	{
	   if(ar[i]==item)
	   {
	   	 f=1;
	   	 break;
	   }	
	}
	if(f==1)
	 printf("\nItem is present in an array\n");
	else
	 printf("\nItem is not present in an array\n");
	
}
