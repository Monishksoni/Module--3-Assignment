#include<stdio.h>
int main()
{
	int row,j,i;
	
	printf("Enter the row :");
	scanf("%d",&row);
	
	for(i=0;i<row;i++)
	{
		
		printf("\n");
		for(j=0;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
	}
}
