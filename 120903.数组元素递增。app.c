#include<stdio.h>
void main() {
	int a = 1;
	int i,j;
	int array[19][20];{
	for(i = 0; i <19; i++) 
		for( j = 0; j < 20; j++) {
			array[i][j] = 0;
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
for(i =0; i<19 ; i++) {
		for( j=0; j<20; j++) {
			array[i][j] = a++;
			printf("%d ", array[i][j]);
		}
		printf("\n");
}
}
