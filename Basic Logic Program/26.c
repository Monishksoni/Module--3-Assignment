//Convert temperature Fahrenheit to Celsius

#include<stdio.h>
int main()
{
	float f,c;
		
	printf("Enter the value in Fahrenheit :");
	scanf("%f",&f);

	c = (f-32) *5.0/9.0;
		
	printf("The value is cesius is %.2f",c);	
	
	return 0;
}

