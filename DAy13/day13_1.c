#include<stdio.h>
#include<stdlib.h>

// ARRAY
// array name will always hold first element address
/*
int main()
{
    int a[5]={10,20,30,40,50};// array initilization
    int i;
    for(i=0;i<5;i++)
    {
        printf("\n%4d at %u",a[i],&a[i]);
    }

    return 0;
}
*/

/*
int main()
{
    int a[5];// array declaration
    int i;
    a[0]=1;
    a[1]=20;
    a[2]=40;
    a[3]=50;
    a[4]=2;

    for(i=0;i<5;i++)
    {
        printf("\n%4d at %u",a[i],&a[i]);
    }

    return 0;
}
*/


/*
int main()
{
    int a[5]={10,20,30};// partial initilization of array
    // while partial initilization remaining elements receives default value as 0
    int i;
    for(i=0;i<5;i++)
    {
        printf("\n%4d at %u",a[i],&a[i]);
    }

    return 0;
}//output
//  10 at 6422280
//   20 at 6422284
//   30 at 6422288
//    0 at 6422292
//    0 at 6422296
*/


/*
int main()
{
    int i;
    int a[5];
    // if we define array value partially at the later stage
    // then remaining values will be the garbage values as default values
    a[0]=1;
    a[1]=2;
    for(i=0;i<5;i++)
    printf("%d at %u\n",a[i],&a[i]);
    return 0;
}
// output 
// 1 at 6422280
// 2 at 6422284
// 4200832 at 6422288
// 0 at 6422292
// 4046848 at 6422296
*/



/*
 int main()
 {
    int arr[5]={1,2,4,};
    printf("%d",sizeof(arr));//20
    return 0;
 }
*/


/*
int main()
{
    int arr[]={10,30,50,60};
    printf("%d",sizeof(arr));//16
    printf("\nsizeof arr[0]=%d",sizeof(arr[0]));//  sizeof arr[0]=4
    return 0;
}
*/ 

/*
int main(void)
{
    int arr[5]={1,2,3,4,5};
    printf("arr : %u &arr:%u arr[0] : %u \n",arr,&arr,&arr[0]);//arr : 6422284 &arr:6422284 &arr[0] : 6422284 
    return 0; 
}
*/


/*
int main()
{
    int arr[3]={1,2,3};
            //arr   arr+1   arr+2
            //828    832     836     840  844  848      852  856  860
            // &arr(block1)          &arr+1(block2)    &arr+2(block3)
    printf("arr : %u &arr:%u arr[0] : %u \n",arr,&arr,&arr[0]);//arr : 6422292 &arr:6422292 arr[0] : 6422292 
    printf("arr+1=%u &arr+1=%u\n",arr+1,&arr+1);//arr+1=6422296 &arr+1=6422304
    printf(" &arr+2=%u\n",&arr+2);// &arr+2=6422316
    return 0;
}    
*/


/*
//a[i]  ===> array notation
//*(a+i) ===> Pointer Notation

//a[0] = *(a+0)
//a[1] = *(a+1)
//a[2] = *(a+2)

int main()
{
    int a[5]={10,20,30,40,50};
    printf("a[0]=%d *(a+0)=%d",a[0],*(a+0));//a[0]=10 *(a+0)=10
    printf("\n&a[0]=%u (a+0)=%u",&a[0],(a+0));//&a[0]=6422284 (a+0)=6422284 
    return 0;
}
//a[0] = 816
// a = 816
//a+0 = 816+0=816 
//*(a+0) = *(816) = 10

//a[1] = 820    
// *(a+1) = *(816+1) = *(820) = 20

//a[2] = 824
//*(a+2) = *(816+2) = *(824) = 30

//a[3] = 828
//a[4] = 832

*/          

/*
int main()
{
    int a[4]={10,20,30,40};
    printf("%d %d",*a,*(a+1));//10 20
    //*a= value at base address =10
    //*(a+1)= value at (base address +1) // value at second element =20
    return 0;
}
*/


/*
int main()
{
    int a[4]={10,20,30,40};
    printf("%d %d",*a,*a+1);//10 11  >>>>>>>>>>...*a+1   value at base address +1       10+1=11
    return 0;
}
 */


/*
int main()
{
    int a[5]={10,20,30,40,50};
   // printf("%d ",*a+4);//14
    // printf("%d ",*(a+2)+5);//30+5    35
    // printf("%d",*a+3+4);// 10+3+4  17
    printf("%d",*(a+1)+*(a+3));// 60        *(a+1)  +   *(a+3) 
     
                               //             (20)   +    (40)      60
    return 0;
}
*/ 
 
 

 
  



























