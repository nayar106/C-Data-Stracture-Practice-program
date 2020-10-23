#include<stdio.h>
void table();
void main()
{
 table();	
}
void table()
{
	int i,n,tab;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("table of %d:\n",n);
	for(i=1;i<=10;i++)
	{
		tab=n*i;
		printf("%d*%d=%d\n",n,i,tab);
	}
}
