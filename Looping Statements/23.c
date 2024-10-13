//23.C Program to Reverse a Number Using FOR Loop

#include<stdio.h>
int main()
{
	int num,i,rev,rem;
	printf("\n Enter The Number:");
	scanf("%d",&num);
	for(i=num;i!=0;i=i/10)
	{
		rem=i%10;
		rev=rev*10+rem;
	}
	printf("\n Reverse Number:%d",rev);
}



