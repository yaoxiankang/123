#include<stdio.h>
#include<windows.h>
int i = 0;
void time() ;
void main() {
	time();
}
void time() {
	Sleep(1000);
	printf("%d\n", ++i);
	time();
}
