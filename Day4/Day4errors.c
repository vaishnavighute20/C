#include<stdio.h>
#include<stdlib.h>

/*
int main()    // COMPILE TIME ERROR
{
    int num1,num2;
    printf("\n Enter num1 value : ");   //when i write wrong syntax that is called compile time error
    scanf("%d",&num1);                  //  ie comma semicolon and format should be proper
    printf("\n Enter num2 value :");
    scanf("%d",&num2);
    printf("Num1=%d Num2=%d",num1,num2);
}
*/

/*
//  LINKING ERROR====          if i am not include proper header file 
 int main()
 {
    printf("hello om5 batch");
    return 0;
 }

*/


/*
#include<limits.h>   // if i am not include this file  
int main()
{
    printf("%d %d \n",INT_MIN, INT_MAX);
    return 0;
}
*/
/*
int main()    
{
    int num1,num2;
    printf("\n Enter num1 value : ");   
    scanf("%d",&num1);                  
    printf("\n Enter num2 value :");
    scanf("%d",&num2);
    printf("%d\n",num1/num2);
    //return 0;   
// if user enters num2=0    RUNTIME ERROR
// Error : floating point exception (core dumped)
//also occured if user have not developed correct logic inside program  also called logical error
// sometime logical error also occures as runtime 

}

*/

