#include<stdio.h>
int leapYear(int n)
{
	if(n%4==0&&(n%100!=100||n%400 == 0))
	{
	   return 1;
	}
	else
	return 0;
}
 
 int FirstDay(int n)
{
	int times = n - 1900;
	int result = 1;
	while(times)
	{
		if(leapYear(1900+times))
		{
			result+=2;
		}
		else
		{
			result++;
		}
		times--; 
	} 
 	return result;
} 

int Days(int year,int mouth,int day)
{
	int result = 0;
	while(mouth)
	{
		mouth--;
		if(mouth == 1||mouth == 3||mouth == 5||mouth == 7||mouth == 8||mouth == 10)
		{ 
	       result +=31;	
		}
		if(mouth == 4||mouth == 6||mouth == 9||mouth == 11)
		{
			result+=30;
		}
		if(mouth==2&&leapYear(year))
		{
			result+=29;
		}
		if(mouth==2&&!leapYear(year))
		{
			result+=28;
		}
		
	}
	return result+day;
}

int main()
{
	int year ,mouth ,day;
	printf("�����������գ�");
	printf("�꣺");
	scanf("%d",&year);
	printf("�£�");
	scanf("%d",&mouth);
	printf("�գ�");
	scanf("%d",&day);
	int t = Days(year,mouth,day);
	printf("��%d��",t);
	switch((FirstDay(year)+t-1)%7)
	{
		case 0: printf("��������");break;
		case 1: printf("������һ");break;
		case 2: printf("�����ڶ�");break;
		case 3: printf("��������");break;
		case 4: printf("��������");break;
		case 5: printf("��������");break;
		case 6: printf("��������");break;
		 
	}
	
}
