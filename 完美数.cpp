#include<stdio.h>

int perfectS(int x)
{
    int sum = 1,i=2;
    for(;i<x;i++)
    {
        if(x%i == 0)
        {
            sum += i;
        }
    }

    if(sum == x) return 1;
    else return 0;
}
int main()
{
	 int x = 4;
    while(x<=10000)
    {
        if(perfectS(x)) printf("%d是完美数\n",x);
        x++;
    }
    return 0;
}
