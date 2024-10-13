//WAP to check whether a number is negative, positive or zero.

#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter the num :");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("This is positive number");
	}
	else if(num<0)
	{
		printf("This is negative number");
	}
	else if (num == 0)
	{
		printf("This is zero");
	}
	else
	{
		printf("Invalid");
	}
	return 0;
}
