//Accept marks from user and check pass or fail

#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter the Marks :");
	scanf("%d",&num);
	
	if(num>40)
	{
		printf("pass");
	}
	else
	{
		printf("fail");
	}
	return 0;
}
