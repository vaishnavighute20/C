#include<stdio.h>
#include<stdlib.h>
/*
extern int i;
int main(void)
{
    printf("i=%d &i=%u",i,&i);
}
i=40;
*/

/*
int i;//global variable // data section
void test();
void test2();
int main(void)
{
    i=20;
    printf("main : i=%d &i=%u",i,&i);
    test();
    printf("\n back to main : i=%d &i=%u \n",i,&i);
    test2();
    return 0;
}

void test()
{
    i=30;
    printf("\n test(): i=%d &i=%u",i,&i);
    i+=4;
}

void test2()
{
    int i=500;//local variable
    printf("\n test2: i=%d &i=%u \n",i,&i);

}
*/


/*

void test();
int main(void)
{
    test();
    printf("\n Back to main");
    test();
    return 0;
}
void test()
{
    int i=10;
    //static int val=i; //error: initializer element is not constant
    //not allowed
    int n=30; //local variable initialization
    printf("\n Val=%d &val=%u N=%d",val,&val,n);
    val+=5;
    n+=5;
    printf("\n Val=%d &val=%u N=%d \n",val,&val,n);

}

*/

/*
void test();
int main(void)
{
    test();
    printf("\n Back to main");
    test();
    return 0;
}
void test()
{
    static int val; //static variable declaration
    val=10; //assigning value to static varibale at the later stage
    //if we initialize static variable at the later stage
    //then it voilets the property of static
    //it is treated as auto variable
    // STATIC VARIABLES MUST BE INITIALIZED AT THE TIME OF DECLARATION ONLY
    int n=30; //local variable initialization
    printf("\n Val=%d &val=%u N=%d",val,&val,n);
    val+=5;
    n+=5;
    printf("\n Val=%d &val=%u N=%d \n",val,&val,n);

}
*/

/*
void test();
int main(void)
{
    test();
    printf("\n Back to main");
    test();
    return 0;
}
void test()
{
    static int val=10; //static variable initialization
    int n=30; //local variable initialization
    printf("\n Val=%d &val=%u N=%d",val,&val,n);
    val+=5;
    n+=5;
    printf("\n Val=%d &val=%u N=%d \n",val,&val,n);

}
*/



/*
static int s_val=10; //Global declaration of static variable DATA Section

void test1();
void test2();
int main(void)
{
    printf("\n Main:s_val=%d &s_val=%u",s_val,&s_val);
    test1();
    test2();
    printf("\n Back to Main:s_val=%d &s_val=%u \n",s_val,&s_val);
    return 0;
}

void test1()
{
    printf("\n Test1 :s_val=%d &s_val=%u",s_val,&s_val);
    s_val+=100; //s_val=s_val+100;
}

void test2()
{
    printf("\n Test2 :s_val=%d &s_val=%u",s_val,&s_val);
    s_val+=5;
}
*/
