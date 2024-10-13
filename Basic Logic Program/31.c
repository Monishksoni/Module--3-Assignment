//Convert kilometers into meters
#include<stdio.h>
int main()
{
	float k,m;
	
	printf("Enter kilometer :");
	scanf("%f",&k);
	
	m = 1000*k;
	
	printf("\nthere are %.1f meter ",m);
	return 0;
}
