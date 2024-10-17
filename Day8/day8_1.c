#include<stdio.h>
#include<stdlib.h>

/*

// while loop
int main()
{
    int i=1;
    while(i<=5)// i is looping varible
    {
        printf("%3d",i);//1  2  3  4  5
        i++;// increment 
    }

    return 0;
}
*/

/*
int main()
{
    int i=5;
    do
    {
        printf("%5d",i);// 1    2    3    4
        i++;
    } while (i<5);
    return 0;
    
}
*/

/*
// menu driven program
//switch case inside do while to perform multiple operation
// 0.Exit 1.ADD 2.SUB 3.MUL 4.DIV 5.MOD
int main()
{
    int num1,num2;
    int choice;
    printf("\nEnter Num1 Value : ");
    scanf("%d",&num1);
    printf("\nEnter Num2 Value : ");
    scanf("%d",&num2);
    
    do
    {
        printf("\n Enter Choice : 0.Exit 1.ADD 2.SUB 3.MUL 4.DIV 5.MOD ");
        scanf("\n%d",&choice);

    switch(choice)
    {
        case 1:
        printf("\n Addition=%d",num1+num2);
        break;

        case 2:
        printf("\n Subtraction=%d",num1-num2);
        break;

        case 3:
        printf("\n Multiplication=%d",num1*num2);
        break;

        case 4:
        printf("\n Division=%d",num1/num2);
        break;

        case 5:
        printf("\n Mod=%d",num1%num2);
        break;

    }//end of switch loop
    }//end of do loop
    while(choice!=0);//end of while loop

    return 0;

}
*/

/*
//goto ie jump statement
// we avoid to use 
int main()
{
    int num;
    printf("\n Enter Number :");
    scanf("%d",&num);
    if(num==5)
    {
        goto label1;//goto name_of_label

    }
    label1:printf("\nNum value is equal to 5\n");
    return 0;
}
*/

/*
// it goes only to label ie forward jump and avoid other statement 
int main()
{
    int num;
    printf("\n Enter Number :");
    scanf("%d",&num);
    if(num==5)
    {
        goto label1;//goto name_of_label
        printf("\n inside if block");
        label1:printf("\nNum value is equal to 5\n");
    }
    printf("\n num=%d",num);
    
    return 0;
}
*/