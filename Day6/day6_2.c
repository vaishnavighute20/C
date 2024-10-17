#include<stdio.h>
#include<stdlib.h>

/*
// BITWISE OPERATORS     we have to solve bit by bit   ie 0,1
// AND(&)   OR(|)   XOR(^)   Complement(~)   Leftshift (<<)    Rightshift (>>)
int main()
{
    int a=-10;
    int b=5;
   // printf("%d",a+b);  //   5
   // printf("%d",a&&b); // 1
   printf("%d",a>b);  //0
    return 0;
}

*/


int main()
{
    int a=30;
    printf("a<<2 : %d",a<<2);  // a<<2 : 120
    return 0;
}


/*
int main()
{
    int x=12;
    int y=10;
    printf("x&y=%d",x&y);  //x&y=8
    
                //   12 in binary   1100
                //   10 in binary   1010                             multiplication  rule
                // ................................
               //    12 & 10        1000      ie  8 in decimal

    printf("\nx|y=%d",x|y);  // x|y=14
                 //   12 in binary   1100                             addition  rule
                //   10 in binary    1010
                //...................................
               //    12 | 10         1110     ie  14 in decimal

    printf("\nx^y=%d",x^y);  // x^y=6
                 //   12 in binary   1100                       if both bits are same then   0      
                //   10 in binary    1010                       if both bits are different   1
                //...................................
               //    12 ^ 10         0110       ie  6 in decimal



    return 0;
}

*/

/*
// complement  ~    ie negation

// formula====    -(n+1)      

int main()
{
    int x=35;
    printf("\n ~x : %d",~x);  // ~x : -36     
    // formula====    -(n+1)                      
        
    return 0;

}
*/