// #include<stdio.h>
// int main()
// {
//     int x=5;
//     printf("%d\n",x);
//     printf("%d\n",&x);    //Address operator;
//     printf("%d",*&x);     //Indirection Operator;
// }



#include<stdio.h>
int main()
{
    int x=5,*j;
    j=&x;
    printf("%d %u\n",x,j);
    printf("%d %u\n",*j,&x);
    printf("%u",*&j);
    return 0; 
}