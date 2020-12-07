#include<stdio.h>
#include<windows.h>
void main() {
	int a[20][10];
	int o = 0;
	int w = 0;
	for(o= 0; o< 20; o++) {
		for(w = 0; w< 10; w++) {
			a[o][w] = 999;
			printf("%d", a[o[w]);
			printf("%d", a[o][w]);
		}
		printf("%d\n");
		printf("\n");
	}
	Sleep(5000);
	for(o= 0; o< 20; o++) {
		for(w= 0; w< 10; w++) {
			a[o][w] = 0;
			printf("%d", a[o][w]);
		}
		printf("%d\n");
		printf("\n");
	}
}
