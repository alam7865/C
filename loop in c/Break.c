main()
{
    int i=1,x;
    while(i<=7)
    {
        printf("Enter the number");
        scanf("%d",&x);
        if(x>0)
        {
            printf("Sabaz Alam");
            break;
            i++;
        }
    }

    i==6?printf("Ends Normally"):printf("Applied break");
}