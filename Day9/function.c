#include<stdio.h>
#include<stdlib.h>


// functions or user defined functions
/*     *****************notes *********************
printf(),scanf() ie predefined function
anything which has opening and closing bracket along something in left-hand side called as function

1. function declaration / function prototype/function signature
 syntax :  return_type function_name([arg/s]);
2. function defination
returntype functionname([args])
3. function calling  ie  if we give ; to function
  functionname([args]);
*/


/*
void test();// function declaration 
// test is my user defined function having return type void ie test() not taking arguments
int main()
{

    //printf("PreCAT Batch OM5");
    //printf()//function name
    //argument that we pass to printf function is string ie argumens or parameter  that may be or may not be used
    // int i=printf("hello"); // i=5
    // printf is function which returns how many number of character it has printed on console ie integer value
    printf("\nInside Main");
    test();//function calling (user defined function)
    
    printf("\n Back to the main");
    test();
    return 0;
}
void test()
{
    // body of test()
    printf("\n Inside test function ");
    printf("\n OM5 - Batch");
}
*/

/*
void sum(int num1,int num2);// function declaration 
//void sum(int,int); // valid syntax
// sum() is my user defined function having return type a void having two arguments
int main()
{
    
    sum(10,5);//function calling (user defined function)
    // 10 is first argument and 5 is second argument
    sum(20,40);// we dont need to write code again 
    return 0;
}
void sum(int num1,int num2)
{
    // body of test()
    printf("\n Addition=%d",num1+num2);   
}
*/

/*
void sum(int num1,int num2);// function declaration 
int main()
{
  int n1,n2;

 printf("\n Enter Num1 Value : ");
 scanf("%d",&n1);
 printf("\n Enter Num2 Value : ");
 scanf("%d",&n2);
 sum(n1,n2);

    return 0;
}
void sum(int num1,int num2)
{
   // body of test()
    printf("\n Addition=%d",num1+num2);   
}

*/


/*
int accept();
int main(void)
{
    int val;
    val=accept(); //val is also as locator variable
    
    printf("\n Val =%d \n",val);
    return 0;
}
int accept()
{
    int n1;
    printf("Enter Number value ");
    scanf("%d",&n1);
    return n1;
    // return type is int ie .... n1
}

*/

/*
int main(void)
{
int i=1;
here:
i=010;
while (i<=5)
{
printf("%d",i);
if (i>2)
goto here;
i++;
} printf("sunbeam");
return 0;
}
*/