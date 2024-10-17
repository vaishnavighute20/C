#include<stdio.h>
#include<stdlib.h>
//program=instructions+data called program
/*initialization can be done once and assighnment many time
int num2=2;
int num2=2;   //initialization >>>>>>>>> wrong gives error
num2=3;
num2=6;    //assignment can be done many time ...only last updated value printed on console
// int num1;//variable declaration
// int num=2;// variable declaration + initialization 
// num =20;// assignment because there is not data type  
*/

/*
int main()
{
    // int num1=1;
    // int num2=2;
    // int num3=3;
    // int num4=4;

    int num=1,num2=2,num3=3,num4=4;
    return 0;
}
*/

/*
int a;
printf("%d",a);// gives garbage value
*/


/*
int main()
{
    int number;//variable declaration
    int roll=500;//variable declaration + initializtion
    double basic_salary = 1000.00,total_salary=2000.00;
    char ch = ('A'); // variable declaration + initialization
    printf("variable and datatypes..\n");
    number=10;
    printf("number=%d\n",number);
    number=20;// assignment
    printf("roll=%d\n",roll);//500
    printf("number=%d\n",number);
    printf("basic_salary=%lf,total_salary=%lf\n",basic_salary,total_salary);
    printf("char=%c\n",ch);
    return 0;   
}
*/


int main()
{
    int num=10;
    // printf("%10d\n",num);// right justified // gives 10 spaces before num on console
    // printf("%-10d\n",num);// left justified // gives 10 spaces after num on console
    // printf("%010d",num);//0000000010     add zeros on blank spaces   right justified
    float fvar=12.33;
    printf("%12.2f\n",fvar);//       12.33//right justified
    printf("%-12.2f\n",fvar);//12.33       //left justified
    printf("%.f\n",fvar);//12   >>>>>value round up hote  if  value is 12.5 then roundup as 13
    printf("%*.*f\n",10,2,fvar);// *.* replaces 5,2 as >>> %5.2 and gives output on console
    // eg   %*.*f,10,5>>>>>>>>>>>>> %10.5f
    return 0;
}



/*
// sizeof()  is a operator and output comes in integer format therefore we use format specifier %d
// like 4,8,2,1,byes...
int main()
{
    int num=10;
    float fvar=12.33;
    double d1=10.33;
    char ch='A';
    // printf("%d\n",sizeof(num));//4
    // printf("%d\n",sizeof(fvar));//4
    // printf("%d\n",sizeof(d1));//8
    // printf("%d\n",sizeof(ch));//1
    printf("%d\n",sizeof(int));//4
    printf("%d\n",sizeof(float));//4
    printf("%d\n",sizeof(double));//8
    printf("%d\n",sizeof(char));//1
    return 0;
}

*/
