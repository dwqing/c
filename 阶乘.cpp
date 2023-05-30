#include<stdio.h> 
double Fac(int x)
{

    double i=1,tem =1;
    while(i<=x)
    {
        tem = tem*i;
        i++;
    }
    return tem;
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%.0f\n",Fac(a));
    return 0;
}
