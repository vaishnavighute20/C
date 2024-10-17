#include<stdio.h>
#include<stdlib.h>


/*
//switch work with integer always
//
// 1.ADD 2.SUB 3.MUL 4.DIV 5.MOD
int main()
{
    int num1,num2;
    int choice;
    printf("\n Enter First Number");
    scanf("%d",&num1);
    printf("\n Enter Second Number");
    scanf("%d",&num2);
    printf("\nplease enter choice");
    printf("\n1.ADD 2.SUB 3.MUL 4.DIV 5.MOD");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("\nAddition=%d",num1+num2);
        break; 

       // case 1:// we can not have duplicate case
       // printf("\n other functionality);
       // break;

        case 2:
        printf("\nSubtraction=%d",num1-num2);
        break;

        case 3:
        printf("\nMultiplication=%d",num1*num2);
        break;

        case 4:
        printf("\nDivision=%d",num1/num2);
        break;

        case 5:
        printf("\nMod=%d",num1/num2);
        break;

        default:
        printf("\nwrong option");
        break;

    }

    return 0;

}

*/  



/*
// if i comment break it will execute till next break therefore break statement is used to break the case
// if there is no break statement it will execute all cases 
int main()
{
    int num1,num2;
    int choice;
    printf("\n Enter First Number");
    scanf("%d",&num1);
    printf("\n Enter Second Number");
    scanf("%d",&num2);
    printf("\nplease enter choice");
    printf("\n1.ADD 2.SUB 3.MUL 4.DIV 5.MOD");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("\nAddition=%d",num1+num2);
        //break; 

        case 2:
        printf("\nSubtraction=%d",num1-num2);
        //break;

        case 3:
        printf("\nMultiplication=%d",num1*num2);
        //break;

        case 4:
        printf("\nDivision=%d",num1/num2);
        break;

        case 5:
        printf("\nMod=%d",num1/num2);
        break;

        default:
        printf("\nwrong option");
        break;

    }

    return 0;

}
*/

/*
int main()
{
    int ch;
    printf("enter number from 1to 12");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: //jan
        case 3: //march
        case 5: //may
        case 7: //july
        case 8: //august
        case 10: //october 
        case 12: //december
        printf("31 days in this month");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf("30 Days in month");
        case 2:
        printf("feb month having 28/29 days");
        break;

        return 0;

    }

    return 0;
}

*/



