#include<stdio.h>
#include<conio.h>
void main( )
{
char str[100];
int len=0;
 clrscr( );
printf(“Enter the string:\n”);
gets(str);
while ( str[len]!= ‘\0’)
len++;
printf(“ \n The length of the string is : %d”,len);
getch ( );
}
