#include<stdio.h>
int main()
{
	int row,i,j,k;
	
	printf("Enter the row :");
	scanf("%d",&row);
	
	int spc = row-1;
	
	for(i=0;i<=row;i++)
	{
		for(j=spc;j>=1;j--)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			printf(" *");
		}
		printf("\n");
		spc --;
	}
}
