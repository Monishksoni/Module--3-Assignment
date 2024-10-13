#include<stdio.h>
int main()
{
	int num,rem;
	
	printf("Enter the num :");
	scanf("%d",&num);
	
	rem = num%10;
	num = num/100;
	
	printf("%d",num);
}
