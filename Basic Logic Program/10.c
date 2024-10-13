//find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>
int main()
{
	int a,h,w,l;
	
	printf("Enter the value of height :");
	scanf("%d",&h);
	
	printf("Enter the value of weight :");
	scanf("%d",&w);
	
	printf("Enter the value of length :");
	scanf("%d",&l);
	
	 a=2*(w*l+h*l+h*w);
	
	printf("circumference of Rectangle is %d",a);
}
