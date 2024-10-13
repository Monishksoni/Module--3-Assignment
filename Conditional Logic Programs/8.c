/*
WAP to accept the height of a person in centimeters and categorize the person according to their height.
*/
#include<stdio.h>
int main()
{
	int h;
	
	printf("Enter the height cm :");
	scanf("%d",&h);
	
	if(h <= 155 )
	{
		printf("Small Height person");
	}
	else if(h <= 170)
	{
		printf("Average Height person");
	}
	else 
	{
		printf("Taller Hseight person");
	}
	
	return 0;
}
