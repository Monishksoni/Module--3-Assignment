/*
WAP to reverse a string and check that the string is palindrome or not 

*/

#include<stdio.h>
int main()
{
	char str1[100],str2[100];
	
	printf("Enter the str :");
	gets(str1);
	
	strcpy(str2,str1);
	strrev(str1);
	strcmp(str1,str2);
	
	if(strcmp(str1,str2) == 0)
	{
		printf("palidrome num");
	}
	else
	{
		printf("not palidrome num");
	}
	

}
