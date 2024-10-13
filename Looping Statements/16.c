//Calculate the Sum of Natural Numbers Using the While Loop

#include<stdio.h>
int main()
{
	int num,i=1,sum=0,value;
	
	printf("Enter num :");
	scanf("%d",&num);
	
	while(i<=num)
	{
		sum = sum+i;
		i++;
	}
	printf("sum of all num is %d",sum);
	
	return 0;
}
