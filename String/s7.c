//Write a program in C to copy one string to another string.
#include <stdio.h>
#include <string.h>
int main ()
{
	char string1[100],string2[100];
	
	printf("\n enter the string1 = ");
	gets(string1);
	printf("\n enter the string2 = ");
	gets(string2);
	
	
	printf("\n string is before copy = ");
	printf("\n string1 = %s",string1);
	printf("\n string2 = %s",string2);
	
	printf("\n string after copy = ");
	
	strcpy(string1,string2);
	
	printf("\n string1 = %s",string1);
	printf("\n string2 = %s",string2);
	
}

