#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *pt,i,sum=0;
	pt=(int*)malloc(sizeof(int));
	printf("Enter 10 numbers:\n");
	for(i=0;i<10;i++)
	{
	  scanf("%d",pt); 
	  sum=sum+*pt;
	}
	printf("Sum is %d",sum);
	
}
