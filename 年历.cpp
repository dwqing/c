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

void PrintfMouth(int year,int mouth,int day)
{
	int startYear = 1900,startMouth = 1,startDay = 1;
	int n = 0;
	int deadlineDay = 0;
	int Tdays = 1;
	while(startYear <= year)
	{
		printf("\n%d年\n",startYear);
		startMouth = 1;
		while(startMouth <= 12)
		{
		
			printf("\n%d月\n",startMouth);
			startDay = 1;
			if(startMouth == 1||startMouth == 3||startMouth == 5||startMouth == 7||startMouth == 8||startMouth == 10)
			{
				deadlineDay = 31;
			}
			if(startMouth == 4||startMouth == 6||startMouth == 9||startMouth == 11)
			{
				deadlineDay = 30;
			}
			if(startMouth==2&&leapYear(startYear))
			{
				deadlineDay = 29;
			}
			if(startMouth==2&&!leapYear(startYear))
			{
				deadlineDay = 28;
			}
		    if(startYear == year&&startMouth == mouth)
			{
				deadlineDay = day;
			}
			if((startYear!=1900&&startMouth != 1)||(startYear == 1900&&startMouth != 1)&&startMouth<=12)
				{
					n =Tdays%7-1;
					printf("\n");
					if(n<0) n = 0;
					while(n)
					{
						printf("        ");
						n--;
					}
				}
			while(startDay<=deadlineDay)
			{
				
				if(Tdays%7 == 0)
				{
					printf("%8d",startDay);
					printf("\n");
				}
				else 
				{
					printf("%8d",startDay);
				}
				startDay++;
				Tdays++;
			}
		startMouth++;
		}
		startYear++;
	}
}


void printdays()
{
	printf("星期一  "); 
	printf("星期二  "); 
	printf("星期三  "); 
	printf("星期四   "); 
	printf("星期五  "); 
	printf("星期六  "); 
	printf("星期日  "); 
	
}





int main()
{
	int year ,mouth ,day;
	printf("请输入年月日：");
	printf("年：");
	scanf("%d",&year);
	printf("月：");
	scanf("%d",&mouth);
	printf("日：");
	scanf("%d",&day);
	printdays(); 
	printf("\n");
	PrintfMouth(year,mouth,day);
	return 0;
}
