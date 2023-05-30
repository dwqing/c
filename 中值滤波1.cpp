#include<stdio.h>
int median(int a,int b,int c)
{
	if(a>=b)
	{
		if(a<=c) return a;
		else if(b>=c) return b;
		else return c;
	}
	else
	{
		if(a>=c) return a;
		else if(b<=c) return b;
		else return c;
	}
}

void change(int *x,int *y)
{
	int t;
	if(*x>*y)
	{
		t=*x;
		*x=*y;
		*y=t;
	}
	
}
int main()
{
	int target[] = {128,100,89,81,99,191,85,119,255,200,198,23,21,32,10,49,98,23,123,234,190,99,190,88,68,97,105,64,25,156};
	int times[30];
	int i; 
	for(i=0;i+2<30;i++)
	{
		times[i] = median(target[i],target[i+1],target[i+2]);
	}	for(i=1;i<29;i++)
	{
		target[i] = times[i-1];
	}
		for(i=0;i<30;i++)
	{
			printf("%d  ",target[i]);
	}
	
	
	int x= 2,y=1;
	change(&x,&y);
	printf("%d",x);
	return 0;
	
 } 
