#include<stdio.h>
#include<stdlib.h>

// POINTER ARITHMETIC
/*
1) *++ptr : incr addresss in pointer, get the value at new address
2) ++*ptr : get the value of address in ptr, pre operation will increment the value
3) ptr++ : ptr+1 : address + 1 = address
    get the current pointer address and performs increment operation on address,
    by scale factor
4)  *ptr++ : similar to ptr+1 (case no.3)
5) (*ptr)++ : wherever pointer is pointing it will increment the value by on_exit
*/


/*
int main()
{
    int num=10;
    num++;
    // printf("\n Num=%d",num);//Num=11
    int *ptr=&num;
    printf("\nNum=%d *ptr=%d",num,*ptr);//Num=11 *ptr=11
    printf("\n&Num=%u ptr=%u",&num,ptr);//&Num=6422296 ptr=6422296

    ++*ptr;// incremented value by 1
    printf("\n After ++*ptr : Num=%d *ptr=%d",num,*ptr);// After ++*ptr : Num=12 *ptr=12
    
    *++ptr;//increment inside address
    printf("\n After *++ptr: Num=%d *ptr=%d",num,*ptr);// After *++ptr: Num=12 *ptr=6422300
    printf("\nAfter *++ptr: &Num=%u ptr=%u",&num,ptr);//After *++ptr: &Num=6422296 ptr=6422300

    return 0;
}
*/

/*
int main()
{
    int num=10;
    int *ptr=&num;

    printf("\n&num=%u ptr=%u",&num,ptr);//&num=6422296 ptr=6422296
    ptr++;//ptr=ptr+1  address+1=address
    printf("\n&num=%u ptr=%u",&num,ptr);//&num=6422296 ptr=6422300
    
    return 0;
}
*/

/*
int main()
{
    int num=10;
    int *ptr=&num;

    printf("\n&num=%u ptr=%u",&num,ptr);//

   // *ptr++;//address+1
   (*ptr)++;//

    printf("\n&num=%u ptr=%u",&num,ptr);//

    printf("\nnum=%d *ptr=%d",num,*ptr);//num=11 *ptr=11
    
    return 0;
}
*/

/*
int main(void)
{
    int num=10;
    int *ptr=&num;

    printf("\n &num=%u ptr=%u",&num,ptr);
    //*ptr++; //address + 1
    (*ptr)++; //value is incremeneted wherever the pointer is pointing
    printf("\n &num=%u ptr=%u",&num,ptr);
    printf("\n &num=%d *ptr=%d \n",num,*ptr);

    num=500;
    printf("\n &num=%d *ptr=%d \n",num,*ptr);
    *ptr=300;
    printf("\n &num=%d *ptr=%d \n",num,*ptr);

    *ptr+=1; // *ptr=*ptr+1 
    printf("\n &num=%d *ptr=%d \n",num,*ptr);

    *ptr*=5; // *ptr= *ptr*5

    printf("\n &num=%d *ptr=%d \n",num,*ptr);
    return 0;
}
//  &num=6422296 ptr=6422296
//  &num=6422296 ptr=6422296
//  &num=11 *ptr=11 

//  &num=500 *ptr=500 

//  &num=300 *ptr=300 

//  &num=301 *ptr=301 

//  &num=1505 *ptr=1505 

*/