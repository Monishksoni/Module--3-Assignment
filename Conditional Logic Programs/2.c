/* Write a C program to read the value of an integer m and display the value of m is 1 when m is larger than 0,
0 when m is 0 and -1 when m is less than 0
 */
#include<stdio.h>
int main()
{
	char num;
	
	printf("Enter the value :");
	scanf(" %c",&num);
	
	if(num==0)
	{
		printf("0");
	}
	else if(num > 0)
	{
		printf("1");
	}
	else
	{
		printf("-1");
	}
	return 0;
}

