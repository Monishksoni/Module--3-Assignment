/*Accept number of students from user. I need to give 5 apples to each
student. How many apples are required? */

#include<stdio.h>
int main()
{
	int r,a;
	
	printf("Enter the students :");
	scanf("%d",&a);
	
	r = 5*a;
	
	printf("%d apples are requered for %d students",r,a);
}
