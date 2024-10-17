#include<stdio.h>
#include<stdlib.h>


//program construct or control statement in c
// (1)  c statement for decision/selection
//     1)  if .....else     2)  switch case
/*
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    // if there is only one statement then there is no need of{}
    if (num%2==0)
    printf("entered number is even number");
    printf("\n end of program");
    return 0;

}
  */

/*
int main()

    {
        int num;
      printf("\n inside if block");
      printf("\nentered number is even number"); 
      printf("\n end of if block");
       // if more number of statement inside if then we have to take {}
    } // scope of if  
    printf("\n end of main");
    return 0;

}
    */


/*
// to check given number is even or odd
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    
    if (num%2==0)
    printf("%d is even number",num);
    else
    printf("%d is odd number",num);
    return 0;
}
*/

/*
// ladder if else or we can also called as nested if else
// we using logical and because in that if 1 is true it goes for 2 
//2 but if we use logical or then if 1 is true it will not go for 2

int main()
{
    char ch;
    printf("enter character");
    scanf("%c",&ch);

    if(ch>=65&&ch<90)//A-Z
    printf("%c is upper case letter",ch);
    else
        if(ch>=97&&ch<122)//a-z
        printf("%c is lower case letter",ch);
        else
            if(ch>=48&&ch<57)//digits
            printf("%c is digit",ch);
            else
                printf("%c is special character symbol",ch);
            
    return 0;
}
*/