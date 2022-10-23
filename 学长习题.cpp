#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	int k;
	cin>>m>>n;
	k=m*n;
	int a[m][n];
	int b[k];
	int p=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			b[p]=a[i][j];
			p++;
		}
	}
	int r,c;
	p=0;
	cin>>r>>c;
	while(r*c!=m*n)
	{
		cout<<"m*n不等于r*c，请重新输入";
		cin>>r>>c; 
	}
	int d[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			d[r][c]=b[p];
			printf("%3d",d[r][c]);
			p++;
		}
		cout<<endl;
	}
	return 0;
}
