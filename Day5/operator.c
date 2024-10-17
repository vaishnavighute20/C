#include<stdio.h>
#include<stdlib.h>


//   ARITHMETIC OPERATOR

/*
int main()
{
    int num1,num2;
    int result;
    printf("Enter Num1 value :");
    scanf("%d",&num1);
    printf("Enter Num2 value :");
    scanf("%d",&num2);
    result=num1+num2;  // expression
                       //  num1+num2=result    wrong syntax  
                       // = is assignment operator  and + is arithmetic operator
    printf("Addition Result=%d",result);
    result=num1-num2;
    printf("\nSubtraction Result=%d",result);
    result=num1/num2;
    printf("\nDivision Result=%d",result);
    result=num1*num2;
    printf("\nMultiplication Result=%d",result);
    result=num1/num2;
    printf("\nMod Result=%d",result);
    return 0;
}
*/


//  short hand operator  +=   -=  *=  /=   

/*
int main()
{
    int num=20;
    printf("Num=%d\n",num);

    num+=5;                    // num=num+5  25
    printf("Num=%d\n",num);
    num-=10;                   // num= num-10
    printf("Num=%d\n",num);         // it always takes updated value
    num*=2;                   // num=num*2
    printf("Num=%d\n",num);
    num/=3;                  // num=num/3
    printf("Num=%d\n",num);
    num%=2;                  // num=num%2
    printf("Num=%d\n",num);
    return 0;
}
*/

/*
//relational operator  <  >  <=  >==  ==
// true  1    
// false  0 
int main()
{
    int num1,num2;
    
    printf("Enter Num1 Value :");
    scanf("%d",&num1);
    printf("Enter Num2 Value :");
    scanf("%d",&num2);
   // printf("\n num1<num2=%d",num1<num2);  
   //printf("\n num1>num2=%d",num1>num2);  
   //printf("\n num1<=num2=%d",num1<=num2);  
   //printf("\n num1>=num2=%d",num1>=num2);  
   //printf("\n num1==num2=%d",num1==num2); 
   printf("\n num1!=num2=%d",num1!=num2);  
    return 0;
}
*/

/*
// ++  and -- operator
int main()
{
    int num=20;
    int a;
    printf("Num=%d",num);
    a=num++; // 20++  
    //   post operation ===value is first assigned and then operation is performed
    printf("\n Num=%d\n a=%d",num,a);  // num =20  num= 21  a=20
              // ++  increment num value by 1
              //  -- decrement value by 1
              // num++    post increment  
              // ++num     pre increment
              // num--     post decrement 
              // --num     pre decrement
    return 0;
}
*/

/*
int main()
{
    int num=20;
    int a;
    printf("Num=%d",num);
    a=++num;  // pre operation   first operation is performed and then value is assigned
    printf("\n Num=%d a=%d",num,a);// Num=20 Num=21 a=21
    return 0;
}
*/


