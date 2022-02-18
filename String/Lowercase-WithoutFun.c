#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i;
    printf("Enter the string\n");
    gets(str);

    for(i=0;str[i];i++){
    if(str[i]>='A' && str[i]<= 'Z')
    {
        str[i]=str[i]+32;
    }

    }

    printf("The Lower case Is %s",str);
    return 0;
}