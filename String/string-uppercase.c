#include<stdio.h>
#include<string.h>
int main()
 {
     char s[20];
     printf("Enter the string");
     gets(s);
     strupr(s);
     printf("The uppercase of %s",s);
    return 0;
}