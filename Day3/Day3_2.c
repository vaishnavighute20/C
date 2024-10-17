#include<stdio.h>
#include<stdlib.h>

/*
int main(void)
{
    int i=30;
    float f=20.67;
    double d=70.43;
    char ch='A';
    //printf("%d",sizeof(ch+i));//   (65+30)=95 ie.. int therefore 4 byte
   // printf("%d",sizeof(i+f));
                      //30+20.67=50.67   ie float  and float has  4
   // printf("%d",sizeof(i+f+ch));//4byte
   // printf("%d",sizeof(f+d));//8 byte
   // printf("%d",sizeof(70.43+f)); //8 byte
//*****SIZEOF ALWAYS IT GOES WITH HIGEST DATA TYPE*****
     printf("%d",sizeof(d)+sizeof(f)); 
     //                 8+4=12    due seperate sizeof

     return 0; 
}
*/

/*
int main()
{
   // int num=0100;//octal
   // int val1=0x50;//hexa decimal
   int val2=400;//decimal
  //printf("num=%d num=%o num=%x",num,num,num); // 64  100  40
 // printf("\nval1=%d val1=%o val1=%0x",val1,val1,val1);  // 80 120 50
  printf("\nval2=%d val2=%o val2=%0x", val2,val2,val2);
    return 0;
}
*/

/*
int main()
{
    int i;
    // printf statement return how many number of charachter it has return on the output screen/console

    i=printf("hello");
    printf("%d",i);//hello5    ie no of character + spaces
    
    return 0;
}
*/
/*
int main()
{
    int i;
    // printf statement return how many number of charachter it has return on the output screen/console

    i=printf("hello om5");
    printf("\n%d",i);//  hello om5  ie no of character +  spaces 
                     //  9
    return 0;
}
*/

/*
int main()
{
    int num1=40;
    int num2=500;
    int num3=7000;
    int num4=-2033;//it is diplay as it is in output
    printf("%d %d %d",num1,num2,num3);
    printf("\n%d %d %d",num3,num1,num2);
    printf("\n%d %d %d",num2,num3,num1);

    printf("\n%6d %6d %6d",num1,num2,num3);// width of spaces 6 and print number from left hand side
    printf("\n%6d %6d %6d",num3,num1,num2);
    printf("\n%6d %6d %6d",num2,num3,num1);

    printf("\n%-6d %-6d %-6d",num1,num2,num3);// width of spaces 6 and print number from right hand side
    printf("\n%-6d %-6d %-6d",num3,num1,num2);
    printf("\n%-6d %-6d %-6d",num2,num3,num1);

    printf("\n%6d",num4);
    printf("\n%-6d",num4);
    return 0;

}
*/
/*
int main()
{
    float f_val1=70.65;
    float f_val2=80.686;
    printf("%f %f",f_val1,f_val2);
    printf("\n%8.1f %7.2f",f_val1,f_val2);
    //8.1  specifies  8spaces width and .1 indicates after decimal one digit
    printf("\n%-8.1f %-7.2f",f_val1,f_val2);
    return 0;
}
*/

/*
int main()
{
    int num=600;
    int val;
    val=printf("%8d",num);// printf is printing 8 spaces on console
    printf("\n Val= %d",val);//val=8  ie it prints no of character+spaces

    return 0;
}
*/

/*
int main()
{
    int num=600;
    int val;
   val=printf("%d",num);// printf is printing 3 spaces on console // val=800
    printf("\n Val= %d",val);//val=8  ie it prints no of character+spaces //val=3

    return 0;
}
*/