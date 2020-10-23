#include<stdio.h>
#include<stdlib.h>
void main()
{
	while(1)
	{
		int *ptr,choice;
	ptr=(int *)malloc(sizeof(int));
	printf("Enter an Element:");
	scanf("%d",ptr);
	if(*ptr%2==0)
		printf("%d is an even no\n",*ptr);
	else
	 printf("%d is not an even no\n",*ptr);
	printf("\nEnter 0 for exit:");
	scanf("%d",&choice);
	if(choice==0)
	{
		exit(1);
	}
	
	}
	
}
