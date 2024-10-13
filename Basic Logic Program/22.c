/* 
Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P 
*/
#include<stdio.h>
#include <math.h>
int main()
{
	float a,p,r,t,ci,power;
	
	printf("Enter the principle :");
	scanf("%f",&p);
	
	printf("Enter the rate :");
	scanf("%f",&r);
	
	printf("Enter the time in year :");
	scanf("%f",&t);
	
	a = p*((1 + r/100)*t) ;
	ci = a-p;
	
	printf("compound intrest is %.2f",ci);
	
	return 0;
}
