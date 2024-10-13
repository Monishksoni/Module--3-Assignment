//Find the Character Is Vowel or Not
#include<stdio.h>
int main()
{
	char value;
	
	printf("Enter the char :");
	scanf(" %c",&value);
	
	if(value == 'a'||value =='e'||value =='i'||value =='o'||value =='u')
	{
		printf("%c is vowel",value);
	}
	else
	{
		printf("%c is not vowel",value);
	}
	return 0;
}
