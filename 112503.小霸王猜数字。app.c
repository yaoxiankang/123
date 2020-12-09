#include<stdio.h>
#include<windows.h>
int i = 5;
int a = 0;
void test();

void main() {
	test();
}

void test() {
	printf("输入在0   ~  20\n");
	scanf("%d", &a);
	if (a == i) {
		printf("答对了，答案是%d\n", i);
	} else if (a > i) {
		printf("数值大了\n");
		test();
	} else if (a < i) {
		printf("数值小了\n");
		test();
	}
}
