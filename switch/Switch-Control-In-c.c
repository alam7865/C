main()
{
    int choice,a,b,s;
    printf("\n1. Addition");
    printf("\n2. Odd-Even");
    printf("\n3. Printing N numbers");

    printf("\n\n Enter Your Choice");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
                printf("Enter two number");
                scanf("%d %d",&a,&b);
                s=a+b;
                printf("The sum of %d and %d Is %d",a,b,a+b);
                break;

        case 2:
                printf("Enter the number");
                scanf("%d",&a);
                if(a%2==0)
                {
                    printf("%d is even number",a);
                }

                else{
                    printf("%d is odd number",a);
                } 
                break; 

        case 3:
                printf("Enter the number you want to print upto");
                scanf("%d",&a);
                for(b=1;b<=a;b++)
                
                    printf("\n %d",b);
                    break;
                

        default:{
            printf("Invalid choice");
         }     
    }
}