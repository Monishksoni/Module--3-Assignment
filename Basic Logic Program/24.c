//Accept 5 employees name and salary and count average and total salary
#include<stdio.h>
int main()
{
	char emp1,emp2,emp3,emp4,emp5;
	int sal1,sal2,sal3,sal4,sal5,totalsal,avg;
	
	
	printf("Enter the name of emp1 :");
	scanf(" %c",&emp1);
	printf("Enter the salary ");
	scanf("%d",&sal1);
	
	printf("Enter the name of emp2 :");
	scanf(" %c",&emp2);
	printf("Enter the salary ");
	scanf("%d",&sal2);
	
	printf("Enter the name of emp3 :");
	scanf(" %c",&emp3);
	printf("Enter the salary ");
	scanf("%d",&sal3);
	
	printf("Enter the name of emp4 :");
	scanf(" %c",&emp4);
	printf("Enter the salary ");
	scanf("%d",&sal4);
	
	printf("Enter the name of emp5 :");
	scanf(" %c",&emp5);
	printf("Enter the salary ");
	scanf("%d",&sal5);
	
	totalsal = sal1+sal2+sal3+sal4+sal5;
	avg = totalsal/5;
	
	printf("Total salary of all emp is %d",totalsal);
	printf("\nAverage salary of all emp is %d",avg);
}
