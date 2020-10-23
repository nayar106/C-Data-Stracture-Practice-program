#include<stdio.h>
void fact();
int main()
{
 fact();	
}
void fact()
{
	int i,n,fact=1;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\nfactorial is:%d",fact);
}
