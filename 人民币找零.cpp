#include<stdio.h>
int main()
{
	
	int fifty=9,twenty=1,ten=1,five=1,one=5;
	for(fifty=9,twenty=1,ten=1,five=1,one=5;fifty>=1;fifty--,twenty+=2,ten+=1)
	{
		printf("50Ԫ��%d�ţ�20Ԫ��%d�ţ�10Ԫ��%d�ţ�5Ԫ��%d�ţ�1Ԫ��%d��\n",fifty,twenty,ten,five,one);
		int tmp = 0;
		tmp = ten;
		while(ten-1)
		{
			ten--;
			five+=2;
			printf("50Ԫ��%d�ţ�20Ԫ��%d�ţ�10Ԫ��%d�ţ�5Ԫ��%d�ţ�1Ԫ��%d��\n",fifty,twenty,ten,five,one);
		}
		ten = tmp;
		while(ten-1)
		{
			ten--;
			five++;
			one+=5;
				printf("50Ԫ��%d�ţ�20Ԫ��%d�ţ�10Ԫ��%d�ţ�5Ԫ��%d�ţ�1Ԫ��%d��\n",fifty,twenty,ten,five,one);
		}
		ten = tmp;
		while(ten-1)
		{
			ten--;
			one+=10;
			printf("50Ԫ��%d�ţ�20Ԫ��%d�ţ�10Ԫ��%d�ţ�5Ԫ��%d�ţ�1Ԫ��%d��\n",fifty,twenty,ten,five,one);
		}
	}
	for(fifty=9,twenty=1,ten=1,five=1,one=5;fifty>=1;fifty--,twenty++,ten+=2)
	{
		printf("50Ԫ��%d�ţ�20Ԫ��%d�ţ�10Ԫ��%d�ţ�5Ԫ��%d�ţ�1Ԫ��%d��\n",fifty,twenty,ten,five,one);
		int tmp = 0;
		tmp = ten;
		while(ten-1)
		{
			ten--;
			five+=2;
			printf("50Ԫ��%d�ţ�20Ԫ��%d�ţ�10Ԫ��%d�ţ�5Ԫ��%d�ţ�1Ԫ��%d��\n",fifty,twenty,ten,five,one);
		}
		ten = tmp;
		while(ten-1)
		{
			ten--;
			five++;
			one+=5;
				printf("50Ԫ��%d�ţ�20Ԫ��%d�ţ�10Ԫ��%d�ţ�5Ԫ��%d�ţ�1Ԫ��%d��\n",fifty,twenty,ten,five,one);
		}
		ten = tmp;
		while(ten-1)
		{
			ten--;
			one+=10;
			printf("50Ԫ��%d�ţ�20Ԫ��%d�ţ�10Ԫ��%d�ţ�5Ԫ��%d�ţ�1Ԫ��%d��\n",fifty,twenty,ten,five,one);
		}
		
	}
	for(fifty=9,twenty=1,ten=1,five=1,one=5;fifty>=1;fifty--,ten+=5)
	{
		printf("50Ԫ��%d�ţ�20Ԫ��%d�ţ�10Ԫ��%d�ţ�5Ԫ��%d�ţ�1Ԫ��%d��\n",fifty,twenty,ten,five,one);
		int tmp = 0;
		tmp = ten;
		while(ten-1)
		{
			ten--;
			five+=2;
			printf("50Ԫ��%d�ţ�20Ԫ��%d�ţ�10Ԫ��%d�ţ�5Ԫ��%d�ţ�1Ԫ��%d��\n",fifty,twenty,ten,five,one);
		}
		ten = tmp;
		while(ten-1)
		{
			ten--;
			five++;
			one+=5;
				printf("50Ԫ��%d�ţ�20Ԫ��%d�ţ�10Ԫ��%d�ţ�5Ԫ��%d�ţ�1Ԫ��%d��\n",fifty,twenty,ten,five,one);
		}
		ten = tmp;
		while(ten-1)
		{
			ten--;
			one+=10;
			printf("50Ԫ��%d�ţ�20Ԫ��%d�ţ�10Ԫ��%d�ţ�5Ԫ��%d�ţ�1Ԫ��%d��\n",fifty,twenty,ten,five,one);
		}
		
	}
	return 0;
 } 
