#include<stdio.h>
void main(){
int  money;
scanf("%d",&money);
if(0<=money && money<=100)
	printf("贫困打工人");
else if(101<=money && money<=1000)
printf("一般打工人");
else if(1001<=money && money<=20000)
printf("土豪打工人");
else
printf("输入有误,请重新输入");
}
