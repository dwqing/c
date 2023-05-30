#include<stdio.h>

//减少空间复杂度
int tribonacci(int n)
{
	if(n == 0) return 0;
	if(n ==2||n==1) return 1;
	int s = 0, q=1, w = 1,i,sum;
	for(i=3;i<n;i++) 
	{
		sum = s + q + w;
		s = q;
		q = w;
		w = sum;
	}
	return sum;
} 

//空间复杂 
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n+1];
	a[0]=0;
	a[1]=1;
	a[2]=1;  
	for(i=3;i<=n;i++)
	{
		a[i] = a[i-1]+a[i-2]+a[i-3];
	}
	printf("n=%d",a[n-1]);
} 
