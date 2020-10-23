#include<stdio.h>
void power();
int main()
{
 power();	
}
void power()
{
	int i,n, p,result=1;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("\nEnter power of that number:");
	scanf("%d",&p);
	for(i=1;i<=p;i++)
	{
		
    	result=result*n;
		
	}
	 
	printf("\nResult is:%d",result);
}

