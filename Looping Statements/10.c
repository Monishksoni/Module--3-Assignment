/*
Write a program you have to make a summation of first and last Digit. (E.g.,
1234 Ans: 5)
*/

#include<stdio.h>
int main()
{
	int firstdigit =0,lastdigit =0,num,sum=0;
	
	printf("Enter the num :");
	scanf("%d",&num);
	
	lastdigit = num%10;
	
	while(num>10)
	{
		num = num/10;
	}
	firstdigit = num;
	
	sum = firstdigit + lastdigit;
	printf("summition is %d",sum);
}
