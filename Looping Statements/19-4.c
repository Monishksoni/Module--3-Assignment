//QUE.19-4 
/* *
   * *
   * * * 
   * * * * 
   * * * * * 
   * * * * * *
   * * * * *
   * * * *
   * * *
   * * 
   *  */
#include<stdio.h>
int main()
{
	int row,i,j,k,l;
	printf("\n enter the number of row: ");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
    }
    for(j=1;j>i;j--)
    {
    	for(k=1;k>row;k--)
    	{
    		printf("* ");
		}
		printf("\n ");
	}
	return 0;
}
