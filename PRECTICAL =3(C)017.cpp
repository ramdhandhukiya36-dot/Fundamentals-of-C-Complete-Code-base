#include<stdio.h>
int main()
{
	int num=10;
	printf("intial value=%d\n",num);
	
	num+=5;
	printf("After+=5:%d\n",num);
	
	num-=3;
	printf("After-=3:%d\n",num);
	
	printf("pre increment(++num)=%d\n",++num);
	
	printf("pre decrement(num--)=%d\n",num--);
	
	printf("final velue =%d\n",num);
	
	return 0;
	
}