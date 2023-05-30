#include<stdio.h>
#include<string.h> 
int pow(int times ,int n)
{
	if(times == 0) return 1;
	else 
	return n*pow(times-1,n);
}

int main()
{
	int n,a[7],time=1000000,i=0,j=0;
	char string[6];
	scanf("%d",&n);
    for(i=0;i<7;i++)
    {
    	if(n/time != 0)
    	{
    		a[j]=n/time;
    		n=n%time;
    		j++;
		}
		time /= 10;
	}
	i=0;
	while(i<j)
	{
		string[i] = a[i] + '0';
		printf("%c",string[i]);
		i++; 
	}
	//printf("\n%s",string);

	
}
