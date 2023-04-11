#include<stdio.h>
int lcm(int x,int y)
{
    if(x<y)
    {
        int t=1;
        t=x;
        x=y;
        y=t;
    }
    int tmp = 0;
    while(tmp = x%y)
    {
        x=y;
        y=tmp;
    }
    return y;
}

int gcd(int x,int y)
{
    return x*y/lcm(x,y);
}
int main()
{
	int n,m;
    scanf("%d%d",&n,&m);
    printf("%d%和%d的最大公约数为%d\n",n,m,lcm(n,m));
    printf("%d%和%d的最小公倍数为%d",n,m,gcd(n,m));
    return 0;
}
