#include<stdio.h>
#include<conio.h>
void main( )
{
int s1,s2,s3,s4,total,per;
 clrscr( );
printf( “Input 4 subject marks:\n”);
scanf(“ %d%d%d%d”,&s1,&s2,&s3,&s4);
total= s1+s2+s3+s4;
printf( “\n Total marks = %d/400”,total);
per= total /4;
printf( “\n Percentage = %d”,per);
printf( “ \n **************\n”);
 if( per>=85 && per<=100)
printf( “Distinction”);
else if ( per>=60 && per<=84)
printf( “First class”);
else if ( per>=50 && per<=59)
printf( “Second class”);
else if ( per>=40 && per<=49)
printf( “Pass”);
else
printf(“Fail”);
getch( );
}