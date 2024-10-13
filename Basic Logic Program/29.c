//Convert minutes into seconds and hours

#include<stdio.h>
int main()
{
	float min,sec,hour;
	
	printf("Enter the minutes :");
	scanf("%f",&min);
	
	sec = min * 60;
	hour = min/60;
	
	printf("There are %.2f sec ",sec);
	printf("\nThere are %.2f hour ",hour);
	return 0;
}
