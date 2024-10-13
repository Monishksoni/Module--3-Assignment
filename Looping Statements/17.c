//Calculate 5 numbers from user and calculate number of even and odd using of while loop

#include<stdio.h>
int main()
{
	int num,i=1,evencount=0,oddcount=0;
	
	while(i<=5)
	{
		printf("Enter num :");
		scanf("%d",&num);
		if(num%2)
		{
			evencount ++;
		}
		else
		{
			oddcount ++;
		}
		i++;
	}
	printf("There are %d even num",evencount);
	printf("There are %d odd num",oddcount);
	
	return 0;
}
