// Arithmetic Operators


// Associative Rule Left to Right.
// Rule 1: * / % priority first.
// Rule 2: + -   Priority Second.

// 5+2-3  =>Solving from left to right i.e 1st(+)then (-);
// 5-2+3  =>Solving from left to right i.e 1st(-)then (+);


// Important Rules

// 1)OPeration performed between integer, then result will be integer.
// i.e 3/4 = 0;

// 2)If operation performed between Real and Integer, then result will be Real.
// i.e  3.0/4 = 0.75;
// i.e  3/4.0 = 0.75;
// i.e  3.0/4.0 = 0.75;


main()
{
    float x;
    // x=5-2+3;
    // x=3/4;   => 0:- Operation performed between two integer then result will be integer.


    x=7.2/4.2;
    // x=3.0/4;
    printf("%f",x);
}