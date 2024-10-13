//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
#include<stdio.h>
int main()
{
	int num,rev,rem;
	printf("Enter the num : ");//654
	scanf("%d",&num);
	
	while(num!=0)
	{
		rem = num%10;
		rev = rev*10+rem;
		num = num/10;
	}
	
	printf("revers num is : %d",rev);
	
	return 0;
}
