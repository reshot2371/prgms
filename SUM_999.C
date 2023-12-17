#include<stdio.h>
#include<conio.h>
void main( )
{
int n,sum=0;
 clrscr( );
printf( “ Enter the numbers both positive as well as negative \n”);
 printf(“Enter 999 at the end \n”);
 while (1)
 {
scanf( “%d”,&n);
if ( n= = 999)
 break;
if(n>0)
 sum =sum+n;
}
printf( “\n Sum of the positive numbers entered is: %d”,sum);
}
