#include<stdio.h>
#include<conio.h>
void main( )
{
 int radius;
 float PI= 3.14,area,circum;
 clrscr( );
 printf(“Enter the radius of Circle :\n”);
 scanf(“%d”,&radius);
 area= PI*radius*radius;
 circum=2*PI*radius;
 printf(“\n Area of a Circle :%f ”,area)
 printf(“\n Circumference of a Circle is : %f ”,circum);
 getch( );
}