#include<stdio.h>
#include<stdlib.h>

/*
// call by value
void fun(int, int);// function declaration
void main()
{
    int x=5,y=7;
    fun(x,y);
    printf("inside main(calling function)\n");
    printf("X=%d Y=%d\n",x,y);
}
void fun(int x, int y) //function defination
{
    x=7;
    y=5;
    printf("inside fun(called function)\n");
    printf("X=%d Y=%d\n",x,y);
}

// inside fun(called function)
// X=7 Y=5
// inside main(calling function)
// X=5 Y=7
*/

/*
// call by reference
void fun(int*, int*);// function declaration
void main()
{
    int x=5,y=7;
    fun(&x,&y);
    printf("inside main(calling function)\n");
    printf("X=%d Y=%d\n",x,y);
}
void fun(int* x, int* y) //function defination
{
    *x=7;
    *y=5;
    printf("inside fun(called function)\n");
    printf("X=%d Y=%d\n",*x,*y);
}

//inside fun(called function)
//X=7 Y=5
//inside main(calling function)
//X=7 Y=5

*/


