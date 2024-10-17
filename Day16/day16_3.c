#include<stdio.h>
#include<stdlib.h>

//  preprocessor directives   //
// these are start with #
// we have to write macro defination on same line  
// These are categorized as
// Macro substitution ( #define )
// File inclusion ( #include )
// Conditional compilation ( #if, #else, ... )
// Others ( #pragma, #, ## )


/*
#define PI 3.14 // macro defination part ie replaceablr text 
int main()
{
    printf("%f",PI);//3.140000

    return 0;

}
*/

 /*
 #define SQR(a) (a*a) 
int main()
{
    int a=3;
    printf("%d",SQR(3));//9
    return 0;
}
*/



/*
#define SQR(a) a*a 
int main()
{
    printf("%d",SQR(3+2));//11
    // 3+2*3+2  
    return 0;
}
*/



/*
#define SWAP(type,a,b) {type temp; temp=a; a=b; b=temp;}
int main()
{
    int n1=10,n2=5;
    printf("\nBefore macro call: N1=%d N2=%d",n1,n2);//Before macro call: N1=10 N2=5
    SWAP(int,n1,n2);
    printf("\nAfter macro call: N1=%d N2=%d",n1,n2);//After macro call: N1=10 N2=10
     return 0;
}
*/



/*

#define STRDISP(x) {printf("\n %s",#x);}
//# indicates string
int main(void)
{
    STRDISP("sunbeam");
   // {printf("\n %s","\"sunbeam\"");}
    STRDISP(pune);
    return 0;
}
*/


/*
#define STRDISP(x) {printf("\n %s",#x+3);}
//# indicates string
int main(void)
{
    STRDISP(sunbeam);// output >>>>beam
    return 0;
}
*/



/*
#define STRDISP(x) {printf("\n %s",#x+3);}
//# indicates string
int main(void)
{
    STRDISP("sunbeam");// output >>>>  nbeam"    ie it counts "
    return 0;
}
*/


/*
#define test(a,b) a##b
//## indicates concatination operation

int main(void)
{
    int ab=400;
    printf("%d",test(a,b));//400
    // printf("\n%d",ab); //400
    return 0;
}
*/



/*
#define PI 3.14
int main(void)
{
    #if defined(PI)
        printf("PI is defined \n");
    #else
        printf("PI is not defined \n");
    #endif
    return 0;
}
//output >>>>>>>>>>>>>   PI is defined 
*/



/*
#define PI 3.14

int main(void)
{
    #if defined(PI)
        printf("PI is defined \n");
    #else
        printf("PI is not defined \n");
    #endif

    #undef PI //please undefine the PI value

    #if defined(PI)
    printf("\n PI is defined \n");
    #else
    printf("\n PI is not defined \n");
    #endif
    return 0;
}

*/



/*
int main(void)
{
   
    printf("\n%d",__LINE__);
    printf("\n%s",__FILE__);
    printf("\n%s",__TIME__);
    printf("\n %s",__DATE__);
    
    return 0;
}
// it gives details like line no,file name,time,date
*/