#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    printf("Enter the string\n");
    gets(s);
    strrev(s);
    printf("%s",s);
}