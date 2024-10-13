/*
c=a+b;
a=c-a;
b=c-a;
	
Accept 2 numbers from user and swap 2 numbers with using 3rd variable
and without using 3rd variable
*/

#include<stdio.h>
int main()
{
	int a=10,b=20,c,p=30,q=40;
	printf("\nusing 3rd variable");
	printf("\n\nbefore swapping a = %d",a);
	printf("\nbefore swapping b = %d",b);
	
	c=a;
	a=b;
	b=c;
	
	printf("\nafter swapping a =%d",a);
	printf("\nafter swapping b =%d",b);
	
	printf("\n\nwithout using 3rd variable");
	printf("\n\nbefore swapping p = %d",p);
	printf("\nbefore swapping q = %d",q);
	
	p = p+q;//70
	q = p-q;//30
	p = p-q;//40
	
	printf("\nafter swapping p =%d",p);
	printf("\nafter swapping q =%d",q);
}
