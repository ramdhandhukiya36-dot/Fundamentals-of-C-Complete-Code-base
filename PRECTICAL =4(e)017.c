#include<stdio.h>
int main()
{
	int choice;
	float num1,num2;
	
	printf("===== Calculator Menu =====\n");
	printf("1.addition\n");
	printf("2.subtrection\n");
	printf("3.multiplication\n");
	printf("4.division\n");
	
	printf("enter your choice:");
	scanf("%d",&choice);
	
	printf("enter two numbers:");
	scanf("%f %f",&num1,&num2);
	
	switch(choice)
	{
		case 1:
			printf("addition=%.2f",num1+num2);
			break;
			
		case 2:
			printf("subtrection=%.2f",num1-num2);
			break;
			
		case 3:
			printf("multiplication=%.2f",num1*num2);
			break;
			
		case 4:
			if(num2!=0)
				{
					printf("division=%.2f",num1/num2);
				}
			else
				{
					printf("division by zero is not allowed.\n");
				}
			break;
			
			default:
				printf("invalid choice!\n");			
	}
	return 0;
	
}