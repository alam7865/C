// Takes Nothing Returns Something.
// int add(void);
// main()
// {
//     int add(void);
//     int s;
//     s=add();
//     printf("The sum is %d",s);
// }

// int add()
// {
//     int a,b,c;
//     printf("Enter the two number to add");
//     scanf("%d %d",&a,&b);
//     c=a+b;
//     return(c);
// }





//Takes Something Return Something

int add(int,int);
main()
{
    int s,x,y;
    printf("Enter two number");
    scanf("%d %d",&x,&y);
    s=add(x,y);
    printf("Sum is %d",s);
}

int add(int a,int b)
{
    int c;
    c=a+b;
    return (c);
}