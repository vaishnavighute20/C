#include<stdio.h>
#include<stdlib.h>

/*
int main()
{
    int *iptr;
    char *cptr;
    int num=60;
    char ch='A';
    iptr=&num;
    cptr=&ch;
    printf("*iptr=%d num=%d",*iptr,num);
    printf("\n*cptr=%c ch=%c",*cptr,ch);

    return 0;
}
*/

/*
int main()
{
    char *cptr;// declaration of pointer
    // cptr is designed to hold the address of type char
    int num=10;
    cptr=&num; // assigning address of type int
    printf("num=%d *cptr=%d ",num,*cptr);//num=10 *cptr=10 
    //while dereferencing it will only derefer first byte of memory
    int val=258;
    cptr=&val;
    printf("\nval=%d *cptr=%d",val,*cptr);//val=258 *cptr=2
    // it repeat cycle ie char range 0 to 255 if the value is within range then it is ok
    return 0;
}           
*/



/*
//VOID POINTER    >>>>>>>>>>>>> typecast is must 
int main()
{
    // void pointrer
    int num=20;
    char ch ='A';
    void *vptr=NULL;// void pointer ie we assign =null
    //void *vptr;// generic pointer     
    vptr=&num;
    printf("\n&num=%u vptr=%u",&num,vptr);
    printf("\nnum=%d *vptr=%d",num,*(int *)vptr);

    // in void pointer we have to type cast for respective pointer type ie.. *(int *)vptr   otherwise gives error 
    vptr=&ch;
    printf("\n&ch=%u vptr=%u",&ch,vptr);
    printf("\nch=%c *vptr=%c",ch,*(char *)vptr);   // type cast as char pointer                                    
    return 0;
}
*/


/**/