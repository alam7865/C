#include<stdio.h>
main()
{
    char s[3][10];
    int i;
    printf("Enter the three string\n");
    for(i=0;i<=2;i++)
    {
       gets(&s[i][0]);  //gets(s[i]);
    }

    for(i=0;i<=2;i++)
    {
        printf("\n%s",s[i]);
    }
}