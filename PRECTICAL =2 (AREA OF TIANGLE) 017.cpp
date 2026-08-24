#include <stdio.h>
int main()
{
	float base,area,hight;
	
	printf("enter base of triangle:");
	scanf("%f",&base);
	
	printf("enter area of triangle:");
	scanf("%f",&area);
	
	printf("enter hight of triangle:");
	scanf("%f",&hight);
	
	area = (base*hight)/2;
	
	printf("area of triangle = %f", area);
	
	return 0;
}