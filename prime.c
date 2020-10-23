#include<stdio.h>
void num();
int main()
{
 num();	
}
void num()
{
	int n,i,flag=0;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n==0)
	 printf("Entered number is not a prime");
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		} 
		  
	}
	 if(n==1)
	 {
	 	printf("number is not a prime");
	 }
	 else{
	 	if(flag==1)
	 printf("number is not  a prime");
	else
	 printf("number is  a prime");
	 } 
		
}
