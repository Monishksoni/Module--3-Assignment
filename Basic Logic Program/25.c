//Accept 5 expense from user and find average of expense

#include<stdio.h>
int main()
{
	int exp1,exp2,exp3,exp4,exp5,avg,texp;
	
	printf("Enter the expense 1 :");
	scanf("%d",&exp1);
	
	printf("Enter the expense 2 :");
	scanf("%d",&exp2);
	
	printf("Enter the expense 3 :");
	scanf("%d",&exp3);
	
	printf("Enter the expense 4 :");
	scanf("%d",&exp4);
	
	printf("Enter the expense 5 :");
	scanf("%d",&exp5);
	
	texp = exp1+exp2+exp3+exp4+exp5;
	avg = texp/5;
	
	printf("The average of all expense is %d",avg);
}
