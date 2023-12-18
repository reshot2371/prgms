#include<stdio.h>
#include<conio.h>
void main( )
{
int num,fact=1,i;
 clrscr( );
printf( “\n Enter a number:”);
scanf( “%d”,&num);
for ( i=1;i<=num;i++)
{
fact = fact *i;
}
printf( “ \n Factorial of %d is %d”,num,fact);
getch ( );
}
