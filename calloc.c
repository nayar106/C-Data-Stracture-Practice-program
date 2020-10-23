#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,*pt;
	printf("Enter no of block:");
	scanf("%d",&n);
	pt=(int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",pt+i);
	}
	for(i=0;i<n;i++)
	{
		printf("%u\t%d\n",pt+i,*(pt+i));
	}
}
