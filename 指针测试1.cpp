#include<stdio.h>
int main()
{
	int a =2;
	int *p;
	int **t;
	p = &a;
	t = &p; 
	printf("a = %d,\n",a);
	printf("p = %d,\n",p);
	printf("*p = %d,\n",*p);
	printf("t = %d,\n",t);
	printf("*t = %d,\n",*t);
	printf("**t = %d,\n",**t);
}
