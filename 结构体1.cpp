#include<stdio.h>
struct Student{
	char name[20];
	int studentID;
	float scroes;
}student1,student2;
int main()
{
	printf("�����һ�������֣�ѧ�ţ��ɼ���");
	printf("���֣�");
	scanf("%s",student1.name);
	printf("ѧ�ţ�");
	scanf("%d",&student1.studentID);
	printf("�ɼ���");
	scanf("%f",&student1.scroes);
	printf("����ڶ��������֣�ѧ�ţ��ɼ���");
	printf("���֣�");
	scanf("%s",student2.name);
	printf("ѧ�ţ�");
	scanf("%d",&student2.studentID);
	printf("�ɼ���");
	scanf("%f",&student2.scroes);
	
	
	if(student1.scroes>student2.scroes)
	{
		printf("%d",student1.studentID);
	 } 
	 else
	 printf("%d",student2.studentID);
 
	 
} 
