#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=-10,b=3,c=0,d;
    printf("\n A=%d B=%d C=%d D=%d",a,b,c,d);
    d=a++ || ( ++b && c++);   // perform from left 
    //(exp1)|| (exp2)
    //-10++ || (exp2)
    // -9   ||(exp2)     non zero number which may be positive and negative gives result 1
    // 1  || (exp2)
    //d=1
    
    printf("\n A=%d B=%d C=%d D=%d",a,b,c,d);  // A=-9 B=3 C=0 D=1
    return 0;
}

/*
int main()
{
    int a=-1, b=3, c=-1, d;
    printf("\n A=%d B=%d C=%d D=%d",a,b,c,d);
    d=a++||(++b && c++);
    //-1++ ||(++b && c++)
   // a=1(0)|| (++3&&-1++)
    //     0   ||  1 && 1(0)

    // d=1 //0   || 1
    //            1
    printf("\n A=%d B=%d C=%d D=%d",a,b,c,d);

    return 0;
    }
*/
 
/*
 int main()
 {
    int a=5,b=3;                 //   logical not   (!)  reverse the result  
    int result;
    result =a && b;
  //  printf("\nResult =%d",result); // Result =1
    printf("\nResult =%d",!result); // Result =0

    return 0;
 }
 */

/*
// ternary operator  =====>  conditional operator  ?   :
//( epression) ? truepart : falsepart :
int main()
{
    int num1,num2;
    int max;
    printf("\n enter first value :");
    scanf("%d",&num1);
    printf("\n enter second value :");
    scanf("%d",&num2);
    max=(num1>num2)?num1:num2;
    printf("Max=%d \n",max);
    return 0;
}
*/