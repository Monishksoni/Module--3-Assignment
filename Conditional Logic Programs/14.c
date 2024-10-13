//WAP to find the largest of three numbers.

#include<stdio.h>
int main()
{
 	int num1,num2,num3,max;
	
	printf("Enter the num1 :");
	scanf("%d",&num1);//1
	
	printf("Enter the num2 :");
	scanf("%d",&num2);//2
	
	printf("Enter the num3 :");
	scanf("%d",&num3);//3
	
	if(num1>num2 && num1>num3)
	{
		printf("%d is largest num ",num1);
	}
	else if(num2>num1 && num2>num3)
	{
		printf("%d is largest num ",num2);
	}
	else
	{
		printf("%d is largest num ",num3);
	}
	
	return 0;
}
