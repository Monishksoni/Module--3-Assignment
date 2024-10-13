/*
Write a C program to input electricity unit charges and calculate total electricity bill
according to the given condition:
For first 50 units Rs. 0.50/unit 
For next 100 units Rs. 0.75/unit 
For next 100 units Rs. 1.20/unit 
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/

#include<stdio.h>
int main()
{
	int unit;
	float bill;
	
	printf("Enter the unit :");
	scanf("%d",&unit);
	
	if(unit<=50)
	{
		bill = (float)unit*0.50;
	}
	else if(unit>50 && unit<=150)
	{
		bill = (50*0.50) + ((float)(unit-50)*0.75);
	}
	else if(unit>150 && unit<=250)
	{
		bill = (50*0.50) + (100*0.75) +((float)(unit-150)*1.20);
	}
	else if(unit>250)
	{
		bill = (50*0.50) + (100*0.75) + (100*1.20) +((float)(unit-250)*1.50);
	}
	
	float surcharge = bill*.20;
	float totalbill = surcharge + bill;
	
	printf("\nSurcharge is %f",surcharge);
	printf("\nTotal electricity bill is : %f",totalbill);
	
}
