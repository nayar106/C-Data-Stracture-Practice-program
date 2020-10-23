#include<stdio.h>
void main()
{
	int a,b,s;
	int *pt1,*pt2;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	pt1=&a;
	pt2=&b;
	s=*pt1+*pt2;
	printf("Addition is:%d",s);
}
