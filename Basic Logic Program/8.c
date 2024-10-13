//Find circumference of Rectangle formula : C = 2 * (l+w)


#include<stdio.h>
int main()
{
	int c,w,l;
	
	printf("Enter the value of weight :");
	scanf("%d",&w);
	
	printf("Enter the value of length :");
	scanf("%d",&l);
	
	 c = 2 * (l+w);
	
	printf("circumference of Rectangle is %d",c);
}
