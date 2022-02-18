#include<stdio.h>
// Swap two integer;
void swap(int *,int *);
int main()
{
    int a,b;
    printf("Enter the two number\n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("a=%d b=%d",a,b);
}

void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}