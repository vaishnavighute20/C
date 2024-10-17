#include<stdio.h>
#include<stdlib.h>

/*
int main()
{
    int a[4];
     int i;
    printf("\nEnter array elements");
    for(i=0;i<4;i++)
    //scanf("%d",&a[i]);    //array notation
    scanf("%d",(a+i));      //pointer notation

    printf("\narray elements are : ");
    for(i=0;i<4;i++)
    //printf("\n%5d at %u",a[i],&a[i]);
    printf("\n%5d at %u",*(a+i),(a+i));
    return 0;

    //note :  in array notation we use & operator 
    // but in pointer we do not use & this operator 
}
*/

/*
// array as argument to function
void accept(int a[4]);// function having array as an argument
int main()
{
    int a[4];
    accept(a);//base address   // alwyas pass base address
     return 0;
}

void accept(int a[4])// function defination
{
     int i;
    printf("\nEnter array elements");
    for(i=0;i<4;i++)
    //scanf("%d",&a[i]);    //array notation
    scanf("%d",(a+i));      //pointer notation

    printf("\narray elements are : ");
    for(i=0;i<4;i++)
    //printf("\n%5d at %u",a[i],&a[i]);
    printf("\n%5d at %u",*(a+i),(a+i));
}
*/


/*
int main(void)
{
    int a[3]={10,20,30};
    printf("%d %d %d %d",a[0],0[a],*(a+0),*(0+a));//10 10 10 10
    printf("\n %d %d %d %d \n",a[1],1[a],*(a+1),*(1+a));// 20 20 20 20

    return 0;
}
*/



/*
void call_r(int v1,int v2); 
int main(void)
 {
      int val1=8,val2=10;
       call_r(val1,val2); 
       return EXIT_SUCCESS;
 }
void call_r(int v1,int v2)
 {
      if(v1&&v2) 
      { 
          printf("f=%2d f=%2d **\n",v1,v2); 
          call_r(--v1,v2--);
        printf("%2d %2d **\n",v1,v2);
        }
 }     
// f= 8 f=10 **
// f= 7 f=10 **
// f= 6 f=10 **
// f= 5 f=10 **
// f= 4 f=10 **
// f= 3 f=10 **
// f= 2 f=10 **
// f= 1 f=10 **
//  0  9 **
//  1  9 **
//  2  9 **
//  3  9 **
//  4  9 **
//  5  9 **
//  6  9 **
//  7  9 **

*/