// #include<stdio.h>


//Replacing &a[i] by *(p+1) 


// int main()
// {
//     int i,a[5],*p;
//     p=&a[0];

//     for(i=0;i<=4;i++)
//     {
//         // scanf("%d",&a[i]);
//         scanf("%d",p+i);
//     }

//     for(i=0;i<=4;i++)
//     {
//         // printf("%d ",a[i]);
//         printf("%d ",*(p+i));
//     }
// }





//

 void input(int *p)
 {
     int i;
     for(i=0;i<=4;i++)
     scanf("%d",p+i);
 }

 void display(int *p)
 {
     int i;
     for (i=0;i<=4;i++)
     {
         printf("%d",*(p+i));
     }

    main()
    {
        int a[5];
        input(a);
        display(a);
    }
 }