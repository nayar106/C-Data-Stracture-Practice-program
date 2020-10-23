#include<stdio.h>
int main()
{
	int max,min,i,n;
	printf("Enter no of element in an array:");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter element in an array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=min=a[0];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		 min=a[i];
		 if(max<a[i])
		  max=a[i];
	}
	printf("\nMximum element in array=%d",max);
	printf("\nMinimum element in array=%d",min);
}
