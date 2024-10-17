#include<stdio.h>
#include<stdlib.h>

/*
no argument without return type
no argument with return type
with argument without return type
with argument with return type
*/

/*
// no argument without return type
void sum();//declaration
void main()
{
    sum();//calling
}
void sum()// defination
{
    int a=5,b=7,sum=0;
    sum=a+b;
    printf("sum=%d",sum);
}
*/


/*
// no argument with return type

int sum();//declaration
void main()
{
    int s;
    s=sum();//calling
    printf("sum=%d",s);
}
int sum()// defination
{
    int a=5,b=7,sum=0;
    sum=a+b;
   // return sum,a,b;  // output last variable value ie sum=7
   // return sum,a;    // otput last variable value  ie sum=5
   // return sum;// output is sum=12
   return sum;

}
*/

/*
char sum();
void main()
{
    char s;
    s=sum();
    printf("sum=%c",s);

}
char sum()
{
    int a=5,b=7,sum=0;
    sum=a+b;
   // return 'a';// output is sum=a    // ie comma operator
   //return 'a','0','1';// sum=1
   return 'b';//sum=b
}
*/

/*
//with argument without return type
void sum(float,float); // function declaration

void main()
{
    float x,y;
    printf("Enter x and y: ");
    scanf("%f %f", &x,&y);
    sum(x, y);

}

void sum(float a, float b)
{
    float s = 0;
    s = a + b;
    printf("Sum = %f", s);
    
}
*/



/*
void sum(int, float); // function declaration

void main()
{
    float x, y;
    printf("Enter x and y: ");
    scanf("%f%f", &x, &y);
    sum(x, y);
}
void sum(int a, float b)
{
    printf("Sum = %f", a+b);
}
*/


/*
//with argument with return type

int sum(int,int);
void main()
{
    int x,y,c;
    printf("enter x and y");
    scanf("%d %d",&x, &y);
    c=sum(x,y);
    printf("sum=%d",c);
}
  int sum(int a, int b)
{
     return a+b;

}
*/

//**********solved question by jenny mam c92************
/*
int jumble(int x,int y)
{
    x=2*x+y;
    return x;
}
int main()
{
    int x=2,y=5;
    y=jumble(y,x);
    x=jumble(y,x);
    printf("x=%d\n",x);
    return 0;
}
// output ======== x=26
*/

/*
int incr(int i)
{
    static int count =0;
    count =count+i;
    return (count);
}
int main()
{
    int i,j;
    for(i=0;i<=4;i++)
    j=incr(i);
    printf("j=%d",j);
    return 0;
}
    */

   /*
void f(int* p,int m)
{
    m=m+5;
    *p=*p+m;
    return;
}
void main()
{
    int i=5,j=10;
    f(&i,j);
    printf("%d",i+j);//30
}
*/