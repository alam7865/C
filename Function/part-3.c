// Take Something Return Nothing.

// #include<conio.h>
// #include<stdio.h>
void add(int,int);          //global decleration
void main()
{
    int x,y;
    void add(int,int);      // local decleration  (function decleration)
    printf("Enter Two number");
    scanf("%d %d",&x,&y);
    
    add(x,y);   //Actual arguments ! call by value.     =>function call by passing value
}

void add(int a,int b) //Formal argument.
{
    int c;
    c=a+b;
    printf("Sum is %d",c);
}