#include<stdio.h>
int main()
{
	int n; 
	printf("��������ݣ�");
	scanf("%d",&n);
	if(n%4==0&&(n%100!=100||n%400 == 0))
	{
	     printf("%d��������",n);
	}
	else
	printf("%d�겻������",n);
}
