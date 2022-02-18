main()
{
    int x;
    x=3>4;
    // Result:False i.e 0;

    // x=3<4;
    // Result:True i.e 1;


    // x=3<=4;
    // Result:True i.e 1;


    // x=4!=3;
    // Result:True i.e 1;

    x=5>4>3;
    // Result:True i.e 5>4=1  now 1>3=0 Therefore Final Result is 0;
    printf("%d",x);
}