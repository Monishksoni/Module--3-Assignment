//WAP to input the week number and print week day.
#include<stdio.h>
int main()
{
    int num,wnum;
    printf("Enter the Num of Weeks :");
    scanf("%d",&num);

    wnum = num *7;

    printf("There are %d days in %d week",wnum,num);

}