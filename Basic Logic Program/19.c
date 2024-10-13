//Calculate compound interest
#include<stdio.h>
int main()
{
	float p,r,y,a,n,t,ans,power;
	printf("Enter the value of principle :");
	scanf("%f",&p);
	printf("Enter the value of rate :");
	scanf("%f",&r);
	printf("Enter the value of year :");
	scanf("%f",&t);
	printf("Enter the num of time interest :");
	scanf("%f",&n);
	
	a = p *(1 + r/n);
	power= n*t;
	ans = pow(a,power);
	printf("compound interest %.2f",ans);
}
