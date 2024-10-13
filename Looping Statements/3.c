/*
WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers
*/
#include<stdio.h>
int main()
{
	int num,i,evencount = 0,oddcount = 0,sumeven = 0,sumodd = 0;
	
	for(i=0;i<10;i++)
	{
		printf("Enter the num :");
		scanf("%d",&num);
		
		if(num % 2 == 0)
		{
			evencount ++;
			sumeven = sumeven + num;
		}
		else
		{
			oddcount ++;
			sumodd = sumodd + num;
		}
	}
	
	
	printf("there are %d even num",evencount);
	printf("\nthere are %d odd num",oddcount);
	printf("\nthere are %d sum of even",sumeven);
	printf("\nthere are %d sum of odd",sumodd);
	
	return 0;
	
}
