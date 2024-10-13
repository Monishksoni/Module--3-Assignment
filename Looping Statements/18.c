//Write a C Program to Print the Multiplication Table of N

#include<stdio.h>
int main()
{
	int num,i,sum=0;
	
	printf("Enter num :");
	scanf("%d",&num);
	
	for(i=1;i<=10;i++)
	{
		sum = num*i;
		printf("\n%d * %d = %d",num,i,sum);
	}
}
