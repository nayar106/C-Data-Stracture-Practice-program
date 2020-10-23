#include<stdio.h>
#include<stdlib.h>
void main()
{
	float *ptr;
	int no,i;
	printf("Enter no of block:");
	scanf("%d",&no);
	ptr=(float*)calloc(no,sizeof(float));
	printf("Enter %d element:\n",no);
	for(i=0;i<no;i++)
	{
		scanf("%f",ptr+i);
	}
	for(i=0;i<no;i++)
	{
		printf("%.2f\t",*(ptr+i));
	}
	
}
