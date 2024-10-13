 //WAP to Find Area And Circumference of Circle

#include<stdio.h>
int main()
{
	int r ;
	float area,cir;
    printf("Enter value for Area :");
    scanf("%d",&r);
    area=3.14*r*r;
    printf("Area is %f ",area);
    
    printf("\nEnter value for circumference :");
    scanf("%d",&r);
    cir=2*3.14*r;
    printf("Cir of circle is %f",cir);
    
    return 0;
}
 
 
 
