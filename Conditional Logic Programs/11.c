//WAP to find number is even or odd using ternary operator

#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter the num :");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("%d is even num",num);
	}
	else
	{
		printf("%d is odd num",num);
	}
	
	return 0;
}
