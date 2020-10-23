#include<stdio.h>
int main()
{
	int a,b,c;
	int *pt1,*pt2,*pt3;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	pt1=&a;
	pt2=&b;
	pt3=&c;
	pt3=pt1;
	pt1=pt2;
	pt2=pt3;
	printf("Number after swapping:\n%d\n%d",*pt1,*pt2);
}
