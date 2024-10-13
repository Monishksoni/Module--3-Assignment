/*Write a program to make Simple calculator 
(to make addition, subtraction,multiplication, division and modulo)*/
#include<stdio.h>
int main()
{
	int num1,num2;
	
	printf("Enter the value of num1 :");
	scanf("%d",&num1);
	printf("Enter the value of num2 :");
	scanf("%d",&num2);
	
	printf("add of two value is %d ",num1+num2);
	printf("sub of two values is %d",num1-num2);
	printf("mul of two values is %d",num1*num2);
	printf("div of two values is %d",num1/num2);
	
	return 0;
}
