//C Program to Check Uppercase or Lowercase or Digit or Special Character

#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter the character :");
	scanf(" %c",&ch);
	
	if(ch>'a' && ch<'z')
	{
		printf("This is in lower case ");
	}
	else if(ch>'A' && ch<'Z')
	{
		printf("This is in upper case");
	}
	else if(ch>'0' && ch<'9')
	{
		printf("This is Digit");
	}
	else 
	{
		printf("This is special character");
	}
	
	return 0;
}
