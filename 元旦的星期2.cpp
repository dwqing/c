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
 
 int Day(int n)
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
 	return result%7;
} 
 
 int main()
 {
 	int n; 
	printf("��������ݣ�");
	scanf("%d",&n);
	switch(Day(n))
	{
		case 0: printf("%d���Ԫ����������",n);break;
		case 1: printf("%d���Ԫ��������һ",n);break;
		case 2: printf("%d���Ԫ�������ڶ�",n);break;
		case 3: printf("%d���Ԫ����������",n);break;
		case 4: printf("%d���Ԫ����������",n);break;
		case 5: printf("%d���Ԫ����������",n);break;
		case 6: printf("%d���Ԫ����������",n);break;
		 
	}
	return 0; 
 }
