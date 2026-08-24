#include<stdio.h>
int main()
{
	int rollno;
	char grade;
	float mark;
	
	printf("enter rollno:");
	scanf("%d",&rollno);
	
	printf("enter marks:");
	scanf("%f", &mark);
	
	printf("enter grade:");
	scanf(" %c", &grade);
	
	printf("\n-----student details-----\n");
	printf("roll number :%d\n",rollno);
	printf("marks       :%.2f\n",mark);
	printf("grade       :%c\n",grade);
	
	return 0;
}