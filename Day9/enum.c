 #include<stdio.h>
 #include<stdlib.h>

/*
 enum colours{RED, GREEN, BLUE};
 // enum is keyword
 // colours is enum name
 // RED, GREEN, BLUE these are called as enum elements
 //enum constants are always integer

 int main()
 {
    printf("Red : %d",RED);// accessing enum element red
    printf("\nGreen : %d",GREEN);// accessing enum element green
    printf("\nBlue : %d",BLUE);// accessing enum element blue
    return 0;
 }
 //Red : 0
//Green : 1
//Blue : 2
 */

/*
enum colours{RED=5, GREEN =6, BLUE=7};
 // we can assign inter value to enum variable
 int main()
 {
    printf("Red : %d",RED);// accessing enum element red
    printf("\nGreen : %d",GREEN);// accessing enum element green
    printf("\nBlue : %d",BLUE);// accessing enum element blue
    return 0;
 }
 //Red : 5
//Green : 6
//Blue : 7
*/

/*
enum colours{RED=4, GREEN, BLUE=10};
 // we can assign inter value to enum variable
 // if we not assign any value to enum variable then it will take next value of previous enum variable
 int main()
 {
    printf("Red : %d",RED);// accessing enum element red
    printf("\nGreen : %d",GREEN);// accessing enum element green
    printf("\nBlue : %d",BLUE);// accessing enum element blue
    return 0;
 }
 //Red : 4
//Green : 5
//Blue : 10
*/

/*
// accssing enum variable by enum elements directly
enum colours{RED=5, GREEN=10, BLUE};
 // we can assign  RANDOM inter value to enum variable
 // if we not assign any value to enum variable then it will take next value of previous enum variable
 int main()
 {
    printf("Red : %d",RED);// accessing enum element red
    printf("\nGreen : %d",GREEN);// accessing enum element green
    printf("\nBlue : %d",BLUE);// accessing enum element blue
    return 0;
 }
 //Red : 5
//Green : 10
//Blue : 11
*/

/*

//accesing enum elements by enun variable
enum colors{RED=5, GREEN=10, BLUE};
int main()
{
    enum colors clr;//clr is called as enum variable of type enum colors

    clr=RED;// red element of enum is accesed through enum variable
    printf("\n value of clr=%d",clr);// value of clr=5

    clr=GREEN;
    printf("\n value of clr=%d",clr);// value of clr=10

    clr=BLUE;
    printf("\n value of clr=%d",clr);// value of clr=11
    return 0;
}
*/

/*
// size of enum is fixed ie 4 bytes
// enum variable have capability to store only one variable at a time so its size is always 4 byte
enum colors {RED=-1,GREEN,BLUE};
int main()
{
   printf("RED=%d",RED);
   printf("\nGREEN=%d",GREEN);
   printf("\nBLUE=%d",BLUE);
   printf("\nsizeof enum=%d",sizeof(enum colors));
   return 0;
}
//RED=-1
//GREEN=0
//BLUE=1
//sizeof enum=4
*/


/*
enum colors {RED=-1,GREEN,BLUE};
int main()
{
   enum colors clr=RED ,GREEN, BLUE;
   printf("\nclr =%d",clr); //clr =-1  ie we can not assign multiple variable inside clr it gives only one variable at a time
   printf("\n sizeof clr=%d",sizeof(clr));// sizeof clr=4  ie fixed 
   return 0;
}
*/


/*
// we can give nickname to enum but nickname should be written before ;
// eg  typedef int number;  ie typedef <existing datatype name> nickname ;  ie before semicolon nickname should be provided

typedef enum department{TCT,ADMIN,SECURITY,PLACEMENT}DEPT;
//department is real name and DEPT is nickname given to enun
int main()
{
    enum department dpt_real;//dpt_real is variable name created by using real name
    DEPT dpt_nick_name;
    //dpt_nick_name is a variable name of typpe enum DEPT by using its nickname

    dpt_real=TCT;
    printf("\ndpt_real=%d",dpt_real);//dpt_real=0
    dpt_nick_name=TCT;
    printf("\ndpt_nick_name=%d",dpt_nick_name);//dpt_nick_name=0

    return 0;

}
*/


/*
// enum which do not have any name called as annonymous enum
// if we do not declare a enum name then i can not declare a enum variable 
// inthis case we can access enum elements directly by their name
enum{MON,TUE,WED,THUR,FRI};
int main()
{
   printf("\nMon=%d",MON);//Mon=0
   return 0;

}
*/

/*
// we can give nick name to enum without giving real name
 typedef enum{MON,TUE,WED,THUR,FRI}Days;// nickname given anonymous enum
int main()
{
   printf("\nMon=%d",MON);//Mon=0
   Days d;// d is a variable of type enum having nickname Days

   d=TUE;
   printf("\nDays d=%d",d);//Days d=1
  
   d=WED;
   printf("\nDays d=%d",d);//Days d=2
   
   return 0;
*/


/*
// enum is used to convert text data in inger format we can not define integer as element of enum
// we use enum to increase read ability of code
enum Menu{EXIT,ADD,SUB,MUL,DIV};
//0.EXIT 1.ADD 2.SUB 3.MUL 4.DIV
int main()
{
   int num1,num2;
   enum Menu choice;//

   printf("\n Enter First Number :");
   scanf("%d",&num1);

   printf("\n Enter Second Number :");
   scanf("%d",&num2);

   do
   {
      printf("\n Enter Choice 0.EXIT 1.ADD 2.SUB 3.MUL 4.DIV");
      scanf("%d",&choice);
      switch(choice)
      {
         case ADD:
         printf("\n Addition =%d",num1+num2);
         break;

         case SUB:
         printf("\n Subtraction = %d \n",num1-num2);
         break;

         case MUL:
         printf("\n Multiplication = %d \n",num1*num2);
         break;

         case DIV:
         printf("\n Division = %d \n",num1/num2);
         break;

      }
   } while (choice!=0);
 return 0;  
}

*/
