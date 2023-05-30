#include<stdio.h>

void sorts(int *a)
{
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=1+i;j<10;j++)
		{
			if(*(a+i)>*(a+j))
			{
				int t;
				t = *(a+i);
				*(a+i) = *(a+j);
				*(a+j) = t;
			}
		}
	}
}

int main()
{
	
	int a[10] = {5,6,9,8,7,15,156,78,56,58};
	sorts(a);
	int i;
	for(i = 0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
