#include<stdio.h>
#include<stdlib.h>
void result();
void main()
{
	int choice;
	do{
		printf("Press 1 for Show  result:");
		printf("\nPress 0 to exit:");
		scanf("%d",&choice);
		if(choice==1)
		{
			result();
		}
	  }while(choice!=0);
	
}
void result()
{
	int *ptr,i,avg,sum=0;
	ptr=(int*)calloc(5,sizeof(int));
	printf("\nEnter marks of 5 subject:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",ptr+i);
		sum=sum+*(ptr+i);
	}
	avg=sum/5;
	if(avg>=60)
	 printf("Your grade id A\n");
	else if(avg<=60||avg>=45)
	 printf("Your grade id B\n");
	else if(avg<=45||avg>=30)
	 printf("Your grade id c\n");
	else
	  printf("You are fail\n");
}
