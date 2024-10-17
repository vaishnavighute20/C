#include<stdio.h>
#include<stdlib.h>


// ************const keyword*************************  //

/*
int main()
{
    float PI=3.14;// non constant value
    printf("PI=%f",PI);//PI=3.140000
    PI++;
    printf("\nPI=%f",PI);//PI=4.140000
    return 0;
}
*/

/*
int main()
{
    const float PI=3.14;//  constant value
    printf("PI=%f",PI);//PI=3.140000
     //PI++;   // error = increment of read-only variable 'PI
     // we can not modify const keyword
    return 0;
}
*/

/*
int main()
{
    const float PI=3.14;//  constant value
    float *fptr;
    fptr=&PI;
    printf("\nPI=%f *fprt=%f",PI,*fptr);//PI=3.140000 *fprt=3.140000
   // PI++; //error = increment of read-only variable 'PI

   *fptr=20.5;// through pointer variable we have changed constant value
   printf("\nPI=%f *fprt=%f",PI,*fptr);//PI=20.500000 *fprt=20.500000

    return 0;
}
*/


/*
int main()
{
    const float PI=3.14;
    const float *fptr;// pointer is pointing to constant value
    fptr=&PI;
    printf("\nPI=%f *fprt=%f",PI,*fptr);//PI=3.140000 *fprt=3.140000
    //PI++;  //error = increment of read-only variable 'PI
  // *fptr=5.15;  //  error: assignment of read-only location '*fptr'

  float f_val=20.5;
  fptr=&f_val;// pointer is pointing to non constant value 
  printf("\nf_val=%f *fptr=%f",f_val,*fptr);//

    f_val++;
   // *fptr=70.6;//error: assignment of read-only location '*fptr'
    printf("\nf_val=%f *fptr=%f",f_val,*fptr);//f_val=21.500000 *fptr=21.500000

    return 0;
}
*/



/*
// pointer and value points at same location   
// no more modification to containts of pointer and address 
//const float * const fptr=&PI;
//we can not perform: 
//1. Change the value inside pointer
//2. change the address location of pointer

int main()
{
    const float PI=3.14;
    const float *const fptr=&PI;// address is constant
    printf("\nPI=%f *fprt=%f",PI,*fptr);//PI=3.140000 *fprt=3.140000
  //  PI++;  //error: increment of read-only variable 'PI'
 // *fptr=5.15;//error: assignment of read-only location '*fptr'
    float f_val=3.5;            
   // fptr=&f_val;//error: assignment of read-only variable 'fptr'

    return 0;
}
*/