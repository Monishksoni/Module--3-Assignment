//calculate the Factorial of a Given Number using while loop

#include<stdio.h>
int main()
{
	long int num,fact=1,i;
	
	printf("Enter the num :");
	scanf("%d",&num);
	
	while(i<=num)
	{
		fact = fact*i;
		i++;
	}
	printf("%ld",fact);
	return 0;
}

