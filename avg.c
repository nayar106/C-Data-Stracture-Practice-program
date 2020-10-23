#include<stdio.h>
int main()
{
  int i,avg,sum=0,num[20];
  printf("Enter five numbers:\n");
  for(i=0;i<5;i++)
  {
  	scanf("%d",&num[i]);
  }
  for(i=0;i<5;i++)
  {
  	sum=sum+num[i];
  }
  avg=sum/5;
  printf("\nAverage=%d",avg);
  	
}
