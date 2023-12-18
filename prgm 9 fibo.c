#include<stdio.h>
#include<conio.h>
void main( )
{
int a=0,b=1,c,n,i=3;
 clrscr( );
printf( “Enter the number of terms:\n”);
scanf(“%d”,&n);
printf(“Fibonacci Series: %d,%d”,a,b);
for ( i=3;i<=n;i++)
{
c=a+b;
printf(“%d”,c);
a=b;
b=c;
}
}