#include <stdio.h>
#include<string.h>
int pow(int times ,int n)
{
	if(times == 0) return 1;
	else 
	return n*pow(times-1,n);
}
int minp(int a,int b)
{
	int t;
	if(a>b)
	{
		t=b;
		b=a;
		a=t;
	}
     
	while(b%a != 0)
	{
		t = b%a;
		b = a;
		a =t;
	}
	return a;	
}

void returnNumerator(char *string)
{
	int i = 0,j =1 , times[3]; times[0] = 0;
	int n1=0,n2=0,n;//分子 
	int e1=0,e2=0,e;//分母 
	while(*(string+i) != '='){
		
		if(*(string+i) == '/'||*(string+i) == '+')
		{
			times[j]  = i;
			j++;
		} 
		i++;
	}
	int t=0;
//	printf("%d",times[1]);
	//t = times[1];
	while(t<times[1])
	{
		n1 += (*(string+t) - '0')*pow(times[1]-t-1,10);
		t++;
	}
//	printf("n1%d",n1);
	
	t = times[1] + 1;
	while(t<times[2])
	{
		e1 += (*(string+t) - '0')*pow(times[2]-t-1,10);
		t++;
	}
//	printf("e1%d",e1);
	t=times[2]+1;
	while(t<times[3])
	{
		n2 += (*(string+t) - '0')*pow(times[3]-t-1,10);
		t++;
	}
//	printf("n2%d",n2);
	t = times[3]+1;
	while(t<i)
	{
		e2 += (*(string+t) - '0')*pow(i-t-1,10);
		t++;
	} 
//	printf("e2%d",e2);
	
	e = e1*e2;
	n = e1*n2+e2*n1;
	
	printf("%d   %d",n,e);
	
		printf(string);
	if(n%e == 0&&n>=e) 
	{
	
		printf("%d",n/e);
	
	}
	else{
    	n = n/minp(n,e);
    	e = e/minp(n,e);
		printf("%d/%d",n,e);
	}

	
}


int main()
{
	//char string[28];
	//scanf("%s",string);  
    char s[100];
    printf("输入分数，中间不允许有空格：并且必须有等号");
	scanf("%s",s); 
   // char string[]  = "5/3+1/3=";
    returnNumerator(s);
   //returnNumerator(string);
  // printf("%d",minp(27,15)); 
    return 0;
} 
