//Convert years into days and months

#include<stdio.h>
int main()
{
	int y,month,day;
	printf("Enter the years :");
	scanf("%d",&y);
	
	month = y * 12;
	day = y * 365;
	
	printf("There are %d month is %d year",month,y);
	printf("\nThere are %d days is %d year",day,y);
	
	return 0;
}
