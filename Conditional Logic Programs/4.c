/*
WAP to make simple calculator (operation include Addition, Subtraction, Multiplication,
Division, modulo) using conditional statement
*/
#include<stdio.h>
int main()
{
	int num1,num2,ans;
	char choice;
	
	printf("Enter the num1 :");
	scanf("%d",&num1);
	printf("Enter the num2 :");
	scanf("%d",&num2);
	
	printf("\n + for Add");
	printf("\n - for Sub");
	printf("\n * for Mul");
	printf("\n / for Div");
	printf("\nEnter the choice :");
	scanf(" %c",&choice);
	
	switch(choice)
	{
		case '+' :
			ans = num1 + num2;
			
		printf("Addition is %d",ans);
		
		break;
		
		case '-':
			ans = num1-num2;
			
		printf("Subtraction is %d",ans);
		
		break;
		
		case '*':
			ans = num1*num2;
			
		printf("Multiplication is %d",ans);
		
		break;
		
		case '/':
			ans = num1/num2;
			
		printf("Division is %d",ans);
		
		break;
		
		case '%':
			ans = num1%num2;
			
		printf("Modulo is %d",ans);
		
		break;
	}
	
	
	
	return 0;
}
