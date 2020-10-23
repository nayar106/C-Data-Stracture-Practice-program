#include<stdio.h>
#include<stdlib.h>
int main()
{
	int no,sum=0;
	printf("input no of values to input:");
	scanf("%d",&no);
	for(int i=1;i<=no;i++)
	{
		int *ptr;
		ptr=(int *)malloc(sizeof(int));
		printf("Input value:");
		scanf("%d",ptr);
		sum=sum+ *ptr;
	}
	printf("sum of given values are:%d",sum);
	
}
