#include<stdio.h>

void main()
{
	int ar[]={1,3,4,6,8,9,12,14,18};
    int start=0,end=8,mid,item,f=0;
	printf("Emter element you want to search:");
	scanf("%d",&item);
	while(start<=end)
	{
		mid=(start+end)/2;
		if(ar[mid]==item)
		{
			printf("\nElement is found at position %d",mid+1);
			f=1;
			break;
		}
		else if(item<ar[mid])
		  end=mid-1;
		else 
		  start=mid+1;
	}
	if(f==0)
	  printf("\nElement not found");
}
