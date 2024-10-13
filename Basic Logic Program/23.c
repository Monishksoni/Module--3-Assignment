//WAP to calculate swap 2 numbers with using of multiplication and division.

#include<stdio.h>
int main()
{
	int a=10,b=20;
	
	printf("before swapping a = %d",a);
    printf("\nbefore swapping b = %d",b);
    
    a=a*b;
    b=a/b;
    a=a/b;
    
    printf("\nafter swapping a = %d",a);
    printf("\nafter swapping b = %d",b);
}
