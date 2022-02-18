#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];
    char g;
    scanf("%c",&ch); 
    scanf("%s",s);
    // scanf("%c",&g);
    printf("\n");
    scanf("%[^\n]s",sen);
    printf("%c",ch);
    printf("\n%s",s);
    // puts(sen);
    printf("\n%s",sen);
    
    return 0;
}