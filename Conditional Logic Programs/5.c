//Check Number Is Positive or Negative
#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter the num :");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("\n%d is Positive Number",num);
	}
	else
	{
		printf("%d is Negative Number",num);
	}
	return 0;
}
