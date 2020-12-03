#include<stdio.h>
void main(){
	char i;
	scanf("%c",&i);
	switch(i){
	case'a':printf("你在点击上键。\n");break;
	case's':printf("你在点击下键。\n");break;
	case'w':printf("你在点击左键。\n");break;
	case'f':printf("你在点击右键。\n");break;
	default:printf("输入有误。\n");
	}
}
