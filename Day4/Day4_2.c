#include<stdio.h>
#include<stdlib.h>
#include<limits.h>   //imp header file for ranges
//   RANGE    ie .. max and min ranges


/*
int main()
{
   // int num=10;
   // printf("num=%d\n",num);
  // printf("\n %d %d\n",INT_MIN,INT_MAX);  //-2147483648 2147483647
   int num=2147483649;
   //            2147483649
   //             2147483648   - 2147483648
   //               2147483649  -2147483647     ie it goes in circular fasion
   printf("num=%d\n",num);
   return 0;
}


*/
       //  signed bit   7 bits     -128 to 127                     
       // unsigned bits  8 bits     0 to 255    
       /*            
int main()
{
   char ch=129;  //  by default each character is sign character
   printf("\n%d\n",ch);    // -127           // 128==  -128             goes in circular manner
   return 0;                                 // 129==  -127
}                                            // 130==  -126
*/

/*
int main()
{              
   char ch=130;
   printf("%d",ch);   //-126

   return 0;
}
*/

/*
int main()
{
   unsigned char ch=255;    // if i am writing unsigned it gives output as  255
   printf("%d",ch);         // 255 is last no on scale of unsigned character
                            //   256   0
                            //   257   1
   return 0;                //   258   2
}
*/

/*
int main()
{
   char ch1=200;
   char ch2=58;
   unsigned char ch3;
   ch3=ch1+ch2;   // 200+58=258
   printf("%d",ch3);//256     0            ie output is   2
   return 0;        // 257    1
}                   //258     2
*/
/*
int main()
{
   char ch1=200;
   char ch2=58;
  char ch3;       // if i am not mentioned unsigned then to 
   ch3=ch1+ch2;   // 200+58=258
   printf("%d",ch3);//256     0            ie output is   2
   return 0;        // 257    1
}                   //258     2
*/

