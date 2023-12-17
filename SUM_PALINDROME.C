#include<stdio.h>
#include<conio.h>
void main( )
{
int num,sum=0,rev=0,d,x;
 clrscr( );
 printf(“Enter the number :\n”);
 scanf(“%d”,&num);
x=num;
while(num)
{
d= num%10;
num = num/10;
sum = sum+d;
 rev = rev*10+d;
}
 printf( “\n Sum of digits = %d”,sum);
 printf( “\n Reverse of the number = %d”,rev);
 if ( x = = rev)
 printf( “\n The number is a palindrome”);
 else
 printf( “\n The number is not a palindrome”);
getch( );
}