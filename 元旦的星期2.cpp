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
	printf("请输入年份：");
	scanf("%d",&n);
	switch(Day(n))
	{
		case 0: printf("%d年的元旦是星期日",n);break;
		case 1: printf("%d年的元旦是星期一",n);break;
		case 2: printf("%d年的元旦是星期二",n);break;
		case 3: printf("%d年的元旦是星期三",n);break;
		case 4: printf("%d年的元旦是星期四",n);break;
		case 5: printf("%d年的元旦是星期五",n);break;
		case 6: printf("%d年的元旦是星期六",n);break;
		 
	}
	return 0; 
 }
