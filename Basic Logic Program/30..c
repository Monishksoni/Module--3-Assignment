//WAP to convert years into days and days into years
#include<stdio.h>
int main()
{
	float y,d,c,f;
	
	printf("Enter year :");
	scanf("%f",&y);
	
	printf("Enter days :");
	scanf("%f",&d);
	
	c = 365*y;
	f = 365/d;
	
	printf("There are %.2f days in %.2f year ",c,y);
	printf("\nThere are %.2f year in %.2f day ",f,d);
	return 0;
}
