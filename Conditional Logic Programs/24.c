//Accept the input month number and print number of days in that month.

#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter the num :");
	scanf("%d",&num);
	
	if(num ==1)
	{
		printf("%d month have 31 days",num);
	}
	else if(num ==2)
	{
		printf("%d month have 28 or 29 days",num);
	}
	else if(num ==3)
	{
		printf("%d month have 31",num);
	}
	else if(num ==4)
	{
		printf("%d month have 30 days",num);
	}
	else if(num ==5)
	{
		printf("%d month have 31 days",num);
	}
	else if(num ==6)
	{
		printf("%d month have 30 days",num);
	}
	else if(num ==7)
	{
		printf("%d month have 31 days",num);
	}
	else if(num ==8)
	{
		printf("%d month have 31 days",num);
	}
	else if(num ==9)
	{
		printf("%d month have 30 days",num);
	}
	else if(num ==10)
	{
		printf("%d month have 31 days",num);
	}
	else if(num ==11)
	{
		printf("%d month have 30 days",num);
	}
	else if(num ==12)
	{
		printf("%d month have 31 days",num);
	}
	else
	{
		printf("invalid input");
	}
	
}
