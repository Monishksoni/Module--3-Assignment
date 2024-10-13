// WAP to show difference between Structure and Union.

#include<stdio.h>
struct Student
{
	int roll;
	float per;
	char grd;
};

union Demo
{
	int num;
	char ch;
	float f;	
};

int main()
{
	struct Student s1;
	s1.roll = 10;
	s1.per = 80.9;
	s1.grd = 'A';
	
	printf("\nStudent roll no. = %d",s1.roll);
	printf("\nStudent percentage = %.2f",s1.per);
	printf("\nStudent grade = %c\n\n",s1.grd);
	
	union Demo d1;
	d1.num = 105;
	d1.f = 75.40;
	d1.ch = 'A';
	printf("\nValue of num = %d",d1.num);
	printf("\nValue of num = %.2f",d1.f);
	printf("\nValue of ch = %c",d1.ch);
	
	return 0;
}



