#include<stdio.h>
#include<stdlib.h>

/*
// if we have multiple ocuurances of ++ or -- pre /post operations
// 1. within printf statement
// 2.   within expression 
int main()
{
    int i=4;
    printf("\n %d %d %d ",++i,i,i++); // 6 6 4 evaluate from RIGHT TO LEFT  manually ie.. these are compiler dependant
    return 0; 
    }
     // compiler may perform all pre operation first or post operation first
     //  ++i    i     i++  
     //    6     5     4   MANUALLY FROM RIGHT TO LEFT   in i++  first value is assigned and then operation is performed 

*/

/*
int main()
{
    int a=2,b;
    b=a++ + a-- + ++a + --a; // expression   LEFT TO RIGHT
    printf("\n a=%d b=%d",a,b); //a=2 b=10
    return 0;
//  b = a++ + a-- + ++a + --a     a=2  because  i perform 2 times increment and decrement operations
//       2  +  3  +  3  +   2    =10
}
*/

/*
int main()
{
    int a=4,b=3;
    int res;
    res=a++ + ++a + --b;   // check pre and post operation
    //   4     6     2  =12
    printf("\n A=%d B=%d Res=%d",a,b,res);  //  A=6 B=2 Res=12
    return 0;
    }
    */


/*

                           manual method 

pre and post operations inside expressions then.........
res=a++ +++a + --b;
int a=4, b=3;

1) Form basic equation
2) Perform pre operations, put the updated values in expression (formed in step1) 
3) Perform post operations

res=a++ +++a + --b;

Step1:
res= a + a + b ====> Basic equation,

Step2: Preoperations
(++a and b)
a = 5
b = 2

*/







