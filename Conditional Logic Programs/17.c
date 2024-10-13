//Write a C program to check whether a triangle can be formed with the given values for the angles.

#include<stdio.h>
int main()
{
	int n1,n2,n3,sum;
	
	printf("Enter the num1 :");
	scanf("%d",&n1);
	printf("Enter the num2 :");
	scanf("%d",&n2);
	printf("Enter the num3 :");
	scanf("%d",&n3);
	
	sum = n1+n2+n3;
	printf("\nAddition of all values is %d",sum);
	if(sum == 180)
	{
		printf("\ntriangle can be formed with the given values");
	}
	else
	{
		printf("\ntriangle can not be formed with the given values");
	}
	
	return 0;
}
