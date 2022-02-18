#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char s[20];
    printf("Enter the integer");
    scanf("%d\n",&i);
    gets(s);
    printf("%d\n",i);
    
    strrev(s);
    printf("%s",s);
    
}