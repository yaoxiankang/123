#include<stdio.h>
#include<string.h>
void main(){
	int a=1;
	int b=2;
	char i[50];
		printf("想玩儿游戏吗，先回答下一句是什么？天王盖地虎，___________。\n");
	scanf("%s",&i);
	if(!strcmp(i,"宝塔镇河妖")){
		printf("答对了，开始游戏吧!\n");
	}
	else
		printf("答错了，请重答\n");
	printf("输入在0  ~  20\n");
	scanf("%s",&a);
	if(a==b){
		printf("答对了,你太厉害了，答案是%d\n");
	}
	else if(a>b){
		printf("数值大了\n");
	}
	else if(a<b){
		printf("数值小了\n");
	}
}
