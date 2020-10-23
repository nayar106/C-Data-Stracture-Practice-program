#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	int *str;
	str=(char*)malloc(10);
	strcpy(str,"Hello");
	printf("String is %s\nAddress is %u",str,str);
	
	printf("\n%s",str);
}
