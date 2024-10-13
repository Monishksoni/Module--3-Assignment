//WAP to print factorial of given number

#include<stdio.h>
int main()
{
	long int num,fact=1,i;
	
	printf("Enter the num :");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		fact = fact*i;
	}
	printf("factorial is %ld",fact);
}
