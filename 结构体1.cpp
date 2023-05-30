#include<stdio.h>
struct Student{
	char name[20];
	int studentID;
	float scroes;
}student1,student2;
int main()
{
	printf("输入第一个的名字，学号，成绩：");
	printf("名字：");
	scanf("%s",student1.name);
	printf("学号：");
	scanf("%d",&student1.studentID);
	printf("成绩：");
	scanf("%f",&student1.scroes);
	printf("输入第二个的名字，学号，成绩：");
	printf("名字：");
	scanf("%s",student2.name);
	printf("学号：");
	scanf("%d",&student2.studentID);
	printf("成绩：");
	scanf("%f",&student2.scroes);
	
	
	if(student1.scroes>student2.scroes)
	{
		printf("%d",student1.studentID);
	 } 
	 else
	 printf("%d",student2.studentID);
 
	 
} 
