#include<stdio.h>
#include<stdlib.h>

// 2d array are indexed by two subscript one for row and other for column  ie... [][]
// when we are using 2d arrays we go with double pointer
// to access the array elements by using pointer  ie pointer arithmetic

/*
int main()
{
    int arr[3][3]={{11,12,13},{14,15,16},{17,18,19}};
    int *p[4]={*arr,*(arr+1),*(arr+2)};
    printf("%d %d \n",arr[0][0],**p);//11 11 
    // **p      
    //**500     
    //*100     
    //11        

     printf("%d %d \n",arr[0][1],*(*p+1));//12 12
     //*(*p+1)
     //*(*500+1)
     //*(100+1)
     //*104
     //12

    printf("%d %d \n",arr[0][1],*(*p+2));//13 13
    //*(*p+2)
    //*(*500+2)
    //*(100+2)
    //*108
    //13
     printf("%d %d \n",arr[1][0],*(*(p+1)));//14 14
     //*(*(p+1)))
    //*(*(500+1))
    //*(*(508))
    //*(112) 
    //14

     printf("%d \n",*(*(p+2)));//17
    //*(*(p+2))
    // *(*(500+2))
    //*(*(516))
    //*(124)
    //17
     printf("%d \n",*(*(p+1)+2));//16
     //*(*(p+1)+2)
     //*(*(508+2))
     //*(120)
     //16
    printf("%d \n",*(*(p+2)+1));//18
    //*(*(516)+1))
    //*(124+1)
    //*128
    //18
     printf("%d \n",*(*(p+1)+1)+20);//35
     //*(*(p+1)+1)+20)
     //*(*(508)+1)+20
     //*(112+1)+20
     //*116+20
     //15+20
     //35   
    
     //a[i][j]=*(*(p+i)+j) 

    return 0;
}
*/