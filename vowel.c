#include<stdio.h>
#include<conio.h>
void main()
{
char s[10]={'a','e','i','o','u'};
char c;
printf("enter a letter");
scanf("%c",c);
for(i=0;i<10;i++)
{
if(c==s[i])
{
printf("vowel");
}
else
{
printf("consonant");
}
}
getch();
}
