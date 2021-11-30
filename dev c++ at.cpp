#include<stdio.h>
int main()
{
	float num,divisor,reminder;
	
	printf("enter the number:");
	scanf("%f,&num");
	
	printf("enter the divisor :");
	scanf("%f,&divisor");
	
	while(num>=divisor)
	{
		num=num-divisor;
	}
	printf("the remainder is =%f",num);
}
