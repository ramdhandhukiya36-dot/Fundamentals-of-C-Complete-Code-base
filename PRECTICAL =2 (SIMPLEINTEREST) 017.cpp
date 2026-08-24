#include<stdio.h>
int main()
{
	float principal,rate,time,simpalinterest;
	
	printf("enter principal amount:");
	scanf("%f",&principal);
	
	printf("enter rate of interest:");
	scanf("%f",&rate);
	
	printf("enter time(years):");
	scanf("%f",&time);
	
    simpalinterest = (principal * rate * time) / 100;

	printf("simple interest = %.2f",simpalinterest);
	
	return 0;
}