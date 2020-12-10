#include<stdio.h>
int main()
	{
	int grade;
	 printf("  成绩等级判定 \n ");
    	scanf("%d",&grade);
		if(85<grade<100){
		printf("A\n");}
		else if(70<grade<84){
		printf("B\n");}
		else if(60<grade<69){
		printf("C\n");}
		else if(grade<60){
		printf("D\n");}
		else
			printf("enter data error!");

return 0;
}
