// ++ Increment OPerator

// main()
// {
//     int x=3;
//     x++;        // x=x+1 Post Increment (after x)
//     printf("%d\n",x);
//     ++x;        // x=x+1 Pre Increment (before x)
//     printf("%d",x);
// }




// --  Decrement Operator
// main()
// {
//     int x=3;
//     x--;        // x=x-1   post decrement  (after x)
//     printf("%d",x);
//     --x;        // x=x-1   pre decrement   (before x)
//     printf("%d",x);

// }


// Example of unary operater

// main()
// {
//     int x=3,y;
//     y=x++;      // =>Since x++ priority is less and   y=x  has higher pririty  Therefore y=x=3;
//                     // x++ It means increment by 1.
                
//     printf("%d %d",x,y);     
//        // =>Result is 4,3
// }



// main()
// {
//     int x=3,y;
//     y=++x;
//     printf("%d %d",x,y);
// }





// sizeof()
// sizeof(data type)

// main()
// {
//     int x;
//     // x=sizeof(int);
//     // Result: 4

//     // x=sizeof(float);
//     // Result: 4

//     // x=sizeof(double);
//     // Result: 8


//     // x=sizeof(char);
//     // Result: 8

//     printf("%d",x);
// }





// sizeof(variable);

// main()
// {
//     // sizeof(data type);
//     int x;
//     float k;
//     double d1;
//     char ch;



//     // x=sizeof(x);
//     // Result: It takes 4 bytes memory.


//     // x=sizeof(float);
//     // Result: It takes 4 bytes memory.


//     // x=sizeof(char);
//     // Result: It takes 1 bytes memory.


//     // x=sizeof(double);
//     // Result: It takes 8 bytes memory.



// //     x=sizeof(int);
// //     printf("%d",x);
//  }




// sizeof(variable)

// main()
// {
//     // sizeof(variable)
//     int x,y;
//     float k;
//     double d1;
//     char ch;
    

//     // x=sizeof(y);
//     // Result: It takes 4 bytes memory.


//     // x=sizeof(k);
//     // Result: It takes 4 bytes memory.

    
//     // x=sizeof(d1);
//     // Result: It takes 8 bytes memory.


//     x=sizeof(ch);
//     // Result: It takes 1 bytes memory.
//     printf("%d",x);
// }



// Constant();
main()
{
    int x,y,z;
    x=sizeof(34);
    y=sizeof(3.56);
    z=sizeof('a');
    printf("%d %d %d",x,y,z);
}