#include<stdio.h>
main()
{
    int i,j,temp;
    int s[5];
    for(i=0;i<=4;i++)
    {
        scanf("%d",&s[i]);
    }

    printf("The number are:");
    for(i=0;i<=4;i++)
    {
        printf("%d ",s[i]);
    }

    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4-1-i;j++)
        {
            if(s[j]<s[j+1])
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }

        printf("\n");

        for(i=0;i<=4;i++)
        {
            printf("%d",s[i]);
        }
        printf("\n");
        printf("%d",s[3]);
        // gets(s);


}