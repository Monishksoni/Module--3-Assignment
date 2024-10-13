//QUE.18 : Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
int main()
{
	float sp,cp,profit,loss;
	printf("\n enter the selling price: = ");
	scanf("%f",&sp);
	printf("\n enter the cost price: = ");
	scanf("%f",&cp);
	profit= sp - cp;
	loss= cp - sp;
	if(profit>loss)
	{
		printf("profit = %f",profit);
	}
	else
	{
		printf("loss = %f", loss);
	}
	

}
