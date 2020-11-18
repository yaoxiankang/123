# 123#include<stdio.h>
void main(){
int i;
scanf("%d",&i);
if(i <= 1)
printf("你还有花呗没还，无法使用该程序");
else if(0 <= i && i <= 500)
printf("赤贫");
else if(501<=i&&i<=1500)
printf("贫困");
else if(1501<=i&&i<=3000)
printf("普通打工人");
else if(3001<=i&&i<=12000)
printf("水电工工资");
else if(12001<=i&&i<=50000)
printf("脑袋大脖子粗不是老板就是伙夫");
else
printf("程序员");





}
