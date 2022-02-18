#include<stdio.h>
#include<string.h>
int main()
{
   char s[20];
   int l;
   printf("Enter your name\n");
   gets(s);
   l=strlen(s);
   printf("Length of %s is %d",s,l);
}