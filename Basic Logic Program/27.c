//Convert days into months

#include<stdio.h>
int main()
{
	float day;
	int month;
	
	printf("Enter the days :");
	scanf("%f",&day);
	month = day / 30.417;
	
	printf("there are %d month",month);

return 0;
}
