#include<stdio.h>
#include<stdlib.h>


int main() 
{
     int i = 10;
     i=printf("\n1020\r%d",printf("Sunbeam Hinjewadi"));
    printf("%d",~i);
     return 0; } 

     

/*
//2. We can not use address of operator with register variable

int main(void)
{
    register int reg_var;
    printf("\n Enter reg variable value : ")  ;
    scanf("%d",&reg_var);
    //error: address of register variable ‘reg_var’ requeste
}
*/



/*
//1. Register variables can not be declared in global section

register int reg_var=10; 
int main(void)
{
    printf("%d \n",reg_var);
}
*/



/*
int main(void)
{
    register int a=20; //CPU Registers
    printf("\n Register Variable = %d",a);//Register Variable = 20
    return 0;
}
*/

/*
int main(void)
{
    auto int a; //local variable
    //int a; //similar to auto int a;
    printf("\n %d",a);
    return 0;
} //scope of main()/ block of main()

*/