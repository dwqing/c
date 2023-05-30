#include<stdio.h>
int main()
{
	void hanoi(int n,char one,char two,char three);
	int m;
	printf("输入盘子数："); 
	scanf("%d",&m);
	printf("步骤");
	hanoi(m,'A','B','C');
	return 0;
}
void hanoi(int n,char one ,char two,char three)
{
	void move(char x,char y);
	if( n == 1)
	move(one ,three);
	else
	{
		hanoi(n-1,one,three,two);
		move(one,three);
		hanoi(n-1,two,one,three);
	}
}
void move(char x,char y)
{
	printf("%c->%c\n",x,y);
}
