#include<stdio.h>

int primeNumber(int x)
{
	if(x == 2) return 1;
	if(x <2 ) return 0 ;
	int i=2,flag=1;
	
	while(x!=i)
	{
		if(x % i == 0)
		{
			flag = 0;
			break;
		}
		i++;
	}
	return flag;
}
int  main()
{
	int n = 6,i,j,flag=1;
	while(n<=100)
	{
		flag = 1;
		 for(i=2;i<n;i++)
		 {
		 	if(flag)
		 	{
		 		if(primeNumber(i))
		 	{
		 		for(j=2;j<n;j++)
		 		{
		 			if(primeNumber(j))
		 			{
		 				if(n == i + j)
		 				{
		 					printf("%d = %d + %d \n",n,i,j);
		 					flag = 0;
		 					break;
						 }
					 }
					
				 }
			 }
			 }
		 	
		 }
		 n++;
	 } 
	return 0;
}
