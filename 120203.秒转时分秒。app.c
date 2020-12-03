#include<stdio.h>
void main(){
	int H,M,S;
	scanf("%d",&S);

	if(S>86400){
	printf("该值以超出最大范围");}
	else {}		H=S/3600;
		M=S/60;
		M=M>60?M-H*60:M;
		S=S>60?S-H*3600-M*60:S;
	printf("%d:%d;%d\n",H,M,S);
}
