//Calculate person’s insurance premium based on salary

#include<stdio.h>
int main()
{
	int i,salary;
	float per =90;
	
	printf("Enter the salary :");
	scanf("%d",&salary);
	
	i = salary - salary*(per/100);
	

	printf("\nperson’s insurance premium based on salary is %d",i);
	
	return 0;
}
