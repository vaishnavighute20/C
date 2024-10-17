#include<stdio.h>
#include<stdlib.h>
 
// 1. passing pointer variable as a argument to function
// 2. returning pointer variable from function



/*
// 1. passing pointer variable as a argument to function

void swap(int *num1,int *num2);
int main()
{
    int n1,n2;
    printf("\n Enter first value :");
    scanf("%d",&n1);
    printf("\n Enter second value :");
    scanf("%d",&n2);

    printf("\n Before swap: n1=%d n2=%d",n1,n2);

    swap(&n1,&n2); //call by reference or address
    
    printf("\n After SWAP: N1 =%d N2= %d",n1,n2);
    return 0;
}  

void swap(int *num1,int *num2)// defination

{
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
}
 */



/*
 // 2. returning pointer variable from function
 // max of two number
 int* larger(int *x, int *y);
 int main()
 {
    int n1,n2;
    int *p;
    printf("\n Enter first value :");
    scanf("%d",&n1);
    printf("\n Enter second value :");
    scanf("%d",&n2);
    p=larger(&n1,&n2);
    printf("\nLarger Number is %d",*p);
    return 0;
 }

  int* larger(int *x, int *y)
{
    if(*x > *y)
      return x;
    else
      return y ;
}
*/

