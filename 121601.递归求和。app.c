##include<stdio.h>
int w(int i){
	if(i<=0)
		return 0;
	else
		return i+w(i-1);
}
void main(){
	int x;
	scanf("%d",&x);
		printf("%d",w(x));
}
