#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[3][3];
	int t;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<2;i++)
	{
		for(int j=1;j<3;j++)
		{
			t=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=t;
		}
	}
	for(int p=0;p<3;p++)
	{
		for(int q=0;q<3;q++)
		{
			printf("%2d",a[p][q]);
		}
		putchar('\n');
	}
	return 0;
}
