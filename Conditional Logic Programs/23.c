//Accept month number and display month name

#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter the num :");
	scanf("%d",&num);
	
	if(num ==1)
	{
		printf("%d month is January",num);
	}
	else if(num ==2)
	{
		printf("%d month is February",num);
	}
	else if(num ==3)
	{
		printf("%d month is March",num);
	}
	else if(num ==4)
	{
		printf("%d month is April",num);
	}
	else if(num ==5)
	{
		printf("%d month is May",num);
	}
	else if(num ==6)
	{
		printf("%d month is June",num);
	}
	else if(num ==7)
	{
		printf("%d month is July",num);
	}
	else if(num ==8)
	{
		printf("%d month is August",num);
	}
	else if(num ==9)
	{
		printf("%d month is Sepetember",num);
	}
	else if(num ==10)
	{
		printf("%d month is Octomber",num);
	}
	else if(num ==11)
	{
		printf("%d month is November",num);
	}
	else if(num ==12)
	{
		printf("%d month is December",num);
	}
	else
	{
		printf("invalid input");
	}
	
}
