#include<stdio.h>
int main()
{
	int a,b,c,max,temp;
    printf("please input a,b,c:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
		if(b<c){
			printf("the largest numver is%d\n",c);
		}
		else
			printf("the largest numver is%d\n",b);
	else if(a<c){
		printf("the largest numver is%d\n",c);
	}
	else
		printf("the largest numver is%d\n",a);
return 0;
}
