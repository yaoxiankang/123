#include<stdio.h>
int main(){
	int i;
	printf("大学排\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1:printf("哈弗");break;
	case 2:printf("麻省理工");break;
	case 3:printf("剑桥");break;
	case 4:printf("芝加哥");break;
	case 5:printf("耶路撒冷");break;
	case 6:printf("清华");break;
	case 7:printf("华盛顿");break;
	case 8:printf("北大");break;
	case 9:printf("浙江");break;
	case 10:printf("复旦大学");break;	
	case 11:printf("四川大学");break;
	case 12:printf("哈尔宾");break;
	case 13:printf("上海交通大学");break;
	case 14:printf("中央财经大学");break;
	case 15:printf("中山大学");break;
	case 16:printf("北京外国语学院 ");break;
	case 17:printf("广西医科大学");break;
	case 18:printf("广西大学");break;										;
	case 19:printf("广西科技大学");break;
	case 20:printf("广西科技师范学院 ");break;
	default:("输入有错误，请重新输入1～20");
	}return 0;
}
