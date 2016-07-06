#include<stdio.h>
#include<conio.h>
void main()
{
char c;
printf("enter the word");
scanf("%c",&c);
if(isalpha(c)!=\0)
printf("alphabet");
else
printf("not a alphabet");
getch();
}
