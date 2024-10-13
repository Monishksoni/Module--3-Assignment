/*
Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, 
name, and unit consumed by the user should be captured from the keyboard to display the total amount to
be paid to the customer. The charge are as follow :
If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the minimum bill should be of Rs. 256/-
*/

#include<stdio.h>
int main()
{
	int id;
	char name[50];
	float unit,charge,surcharge;
	
	printf("\n Enter Customer ID : ");
	scanf("%d",&id);
	printf("\n Enter Customer Name : ");
	//scanf(" %s",&name);
	gets(name);
	printf("\n Enter Units Consumed : ");
	scanf("%f",&unit);
		
	if(unit<350)
	{
		charge = unit *1.20;
	}
	else if(unit>=350 && unit<600)
	{
		charge = unit*1.50;
	}
	else if(unit>=600 && unit<800)
	{
		charge = unit*1.80;
	}
	else 
	{
		charge = unit*2 ;
	}
	
	if(charge>800)
	{
		surcharge = charge*0.18;
		charge = surcharge +charge;
	}
	else if(unit<256)
	{
		charge = 256;
	}
	
	printf("\nElectricity Bill Details:\n");
	printf("Customer ID: %d",id);
	printf("\nCustomer Name: %s",name);
	printf("\nUnits Consumed: %.2f",unit);
	printf("\nSurcharge: Rs. %.2f",surcharge);
	printf("\nTotal Amount to be Paid: Rs. %.2f",charge);
	
	return 0;
}
