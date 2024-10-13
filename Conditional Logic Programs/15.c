/*
Write a C program to determine eligibility for admission to a professional course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three 
subject >=190 or Total in Maths and Physics >=140 -------------------------------------- Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of 
Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.
*/
#include<stdio.h>
int main()
{
	int math,phy,chem,sum,pc;
	printf("Enter Marks of Math :");
	scanf("%d",&math);
	printf("Enter Marks of Phy :");
	scanf("%d",&phy);
	printf("Enter Marks of Chem :");
	scanf("%d",&chem);
	
	if(math>=65 && phy>=55 && chem>=50)
	{
		sum = math + phy + chem;
		pc =phy +chem;
	}
	
	if(sum >=190 && pc>=140)
	{
		printf("Your are eligible");
	}
	else
	{
		printf("Your are not eligible");
	}
	
		printf("\n your total is %d",sum);
		printf("\n your phy and chem total is %d",pc);
}
