//Accept 5 numbers from user and find those numbers factorials

#include<stdio.h>
int main()
{
	int num,i,fact=1;
	
	for(i=1;i<=5;i++)
	{
		printf("Enter number :");
		scanf("%d",&num);
			
	}
	for(i=1;i<=num;i++)
	{
		fact =fact*i;
		printf("\n%d",fact);
	}
	
	
	
	
	
	
}
