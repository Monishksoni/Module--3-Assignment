/*
Write a C program to input basic salary of an employee and calculate its Gross salary 
according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80% 
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
*/

#include<stdio.h>
int main()
{
	float sal,hra,da,gsal;
	
	printf("Enter basic salary :");
	scanf("%f",&sal);
	
	if(sal<=10000)
	{
		hra = sal*0.2;
		da = sal*0.8;
		sal = sal + hra + da;
	}
	else if(sal<=20000)
	{
		hra = sal*0.3;
		da = sal*0.9;
		sal = sal + hra + da;
	}
	else if(sal>20000)
	{
		hra = sal*0.25;
		da = sal*0.95;
		sal = sal + hra + da;
	}
	
	printf("Gross salary is %f",sal);
	
}
