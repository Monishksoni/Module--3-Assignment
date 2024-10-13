#include<stdio.h>
int main()
{
	int row,i,j,k;
	char ch='A';
	printf("Enter the row :");
	scanf("%d",&row);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" %c",ch);
			ch++;
		}
		
		printf("\n");
	}
}
