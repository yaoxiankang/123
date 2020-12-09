#include<stdio.h>
#include<string.h>
void main() {
	char a[5];
	printf("吃货的日程安排，请问现在是什么节？\n");	
	scanf("%s", &a);
	if (strcmp(a, "春节"))
	{
		printf("安排饺子\n");
	} 
	else if(strcmp(a, "端午节"))
	{
		printf("安排粽子\n");
	}
	else if(strcmp(a, "中秋节")) 
	{
		printf("安排月饼\n");
	}
	else if(strcmp(a, "元宵节"))
	{
		printf("安排汤圆\n");
	}
} 
