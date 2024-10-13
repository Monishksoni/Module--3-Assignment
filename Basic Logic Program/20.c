/*
Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary.
*/
#include<stdio.h>
int main()
{
	int salary,per=20,r;
	
	printf("Enter the salary :");
	scanf("%d",&salary);
	
	r = salary - salary*per/100; 
	
	printf("actual salary %d and remaining salary is %d ",salary,r);
}
