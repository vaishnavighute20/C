#include<stdio.h>
#include<stdlib.h>


/*
POINTER 
pointer means address 
it is a variable which is always hold address
size of pointer is always 8 byte or 4 byte
 declaration of pointer    data type *ptrname;  ie...   int *ptr
&  =  address of or reference
*  =  value at or derefence
*ptr =   value at pointer
ptr=contents of ptr
&ptr =address of its own
*/


/*
int main(void)

{
    int num=50;
    
    int *ptr; //declaration of pointer
    ptr=&num;//storing address of num inside pointer
    //pointer is holding address of num

    //int *ptr=&num; 

    printf("num = %d *ptr=%d",num,*ptr);

    printf("\n &num=%u ptr=%u ",&num,ptr);

    printf("\n &ptr=%u ",&ptr);
    printf("\n size of ptr = %d \n",sizeof(ptr));

    num=100;
    printf("\n after changing num value : num = %d *ptr=%d",num,*ptr);

    *ptr=400; //indirect access of variable using pointer
    printf("\n after changing *ptr value : num = %d *ptr=%d \n",num,*ptr);
    return 0;
}
*/

/*
int main()
{
    int num1=40,num2=50;
    int *ptr;
    ptr=&num1;  
    printf("num1=%d *ptr=%d",num1,*ptr);                                    
    printf("\n&num1=%u ptr=%u",&num1,ptr);
    ptr=&num2;
    printf("\nnum2=%d *ptr=%d",num2,*ptr);
    printf("\n&num2=%u ptr=%u",&num2,ptr);
    return 0;
}

*/



// *************pointer to pointer ****************
/*
int main()
{
    int num=30;
    int *ptr=&num;
    int **pptr=&ptr;

    printf("\nNum=%d *ptr=%d **pptr=%d",num,*ptr,**pptr);
    printf("\n&Num=%u ptr=%u *pptr=%u",&num,ptr,*pptr);
    printf("\n&ptr=%u pptr=%u",&ptr,pptr);
    printf("\n &pptr=%u",&pptr);
    printf("\n size=%u",sizeof(pptr));
    return 0;
}
*/

/*
int main(void)
{
    int num=30;
    int *ptr=&num;
    int **pptr=&ptr;

    printf("\n Num=%d *ptr=%d **pptr=%d",num,*ptr,**pptr);

    *ptr=50;
    printf("\n Num=%d *ptr=%d **pptr=%d",num,*ptr,**pptr);

    **pptr=990;
    printf("\n Num=%d *ptr=%d **pptr=%d",num,*ptr,**pptr);

     printf(" \n *&pptr  = %u &ptr = %u \n",*&pptr,&ptr);

    return 0;
}
*/


/*
int main(void)
{
    int num=10;
    char ch='A';
    int *iptr = &num;

    char *cptr=&ch;

    printf("\n Num = %d *iptr=%d",num,*iptr);
    printf("\n Ch = %c *cptr=%c \n",ch,*cptr);

    printf("\n sizeof(cptr)=%d sizeof(iptr)=%d \n",sizeof(iptr),sizeof(cptr));
    return 0;
}
*/

/*
int main(void)
{
    int a=(1,2,3);
    //a=3
    int b=(++a,++a,++a);
    //    (4,5,6) b= 6
    int c=(b++,b++,b++);
            // (6,7,8) // b = 9 //c=8

    printf("\n %d %d %d",a,b,c);
    return 0;
}
*/

/*
int main(void)
 { 
     int c = 5, no = 10;
      do
       {
            no /= c;             
        } while(c--); 
        printf ("%d", no); // 0
        return 0;
}
*/