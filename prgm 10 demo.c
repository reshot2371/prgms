#include<stdio.h>
#include<conio.h>
#include<string.h>
void main( )
{
char s[20],cpy[20],cmp[20],cat[20];
int value;
 clrscr( );
printf(“ \n Enter a String:”);
gets(s));
printf(“ \n Using strlen( ) –Length of the given string is :%d”,strlen(s));
printf(“ \n Using strcpy( ) – Original String is : %s and Copied String is : 
%s”,s,strcpy(cpy,s));
printf( “ \n Enter the string to be concatenated with %s:”,s);
gets(cat);
printf( “ \n Using strcat ( ) – Concatenation of two strings is : %s”,strcat(s,cat));
printf( “ \n Enter the string to be compared with %s:”,cpy);
gets ( cmp);
value = strcmp(cpym,cmp);
if(value = = 0)
printf(“\n Using strcmp ( ) – Strings are same”);
else
printf(“\n Using strcmp ( ) – Strings are not same”);
getch( );
}
