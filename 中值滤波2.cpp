#include<stdio.h>
void change(int *x,int *y)
{
	int t;
	if(*x<*y)
	{
		t=*x;
		*x=*y;
		*y=t;
	}
	
}

int median2(int a,int b,int c,int d,int e)
{
	int times[] = {a,b,c,d,e};
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			change(&times[i],&times[j]);
		}
	}
	return times[2];
}
int main()
{
	int target[] = {128,100,89,81,99,191,85,119,255,200,198,23,21,32,10,49,98,23,123,234,190,99,190,88};
	int times[28];
	int i; 
	for(i=0;i+4<24;i++)
	{
		times[i] = median2(target[i],target[i+1],target[i+2],target[i+3],target[i+4]);
	}
	for(i=2;i<22;i++)
	{
		target[i] = times[i-2];
	}
		for(i=0;i<24;i++)
	{
			printf("%d \n ",target[i]);
	}
	//printf("ÖÐÎ»Êý%d  ",median2(1,2,8,6,4));
	return 0;
	
} 
