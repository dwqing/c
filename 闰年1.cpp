#include<stdio.h>
int main()
{
	int n; 
	printf("请输入年份：");
	scanf("%d",&n);
	if(n%4==0&&(n%100!=100||n%400 == 0))
	{
	     printf("%d年是闰年",n);
	}
	else
	printf("%d年不是闰年",n);
}
