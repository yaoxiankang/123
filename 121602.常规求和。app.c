#include<stdio.h>
int main()
{
    int i;
    int sum=0;
	int x;
	scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        sum+=i;
    }
    printf("求和结果为：%d\n",sum);
    return 0;

}
