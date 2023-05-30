#include<stdio.h>
// int *a;
//int*a;
//int * a;
int main()
{
	float a,b;
	a = 1;
	b = 2;
	float *p1,*p2;
	float **p11,**p22;
	p1=&a;
	p2=&b;
	p11 = &p1;
	p22 = &p2;
	printf("1  %f %f\n%f %f\n%f,%f\n",a,b,*p1,*p2,**p11,**p22); 
	printf("2  %f %f\n%f %f\n%d,%d\n",a,b,*p1,*p2,*p11,*p22); 
	printf("3  %f %f\n%f %f\n%d,%d\n",a,b,*p1,*p2,p11,p22); 
	printf("WAHd%d",sizeof(p1));
	printf("WAHd%d",sizeof(a));
 } 
