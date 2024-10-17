#include<stdio.h>
#include<stdio.h>
//   2D  ARRAY   //

/*
#define ROW 2    // #define is macros  and it gives 2 where is row and column
#define COL 2

int main(void)
{
    int mat[2][2]={{1,1},{1,2},{2,1},{2,2}}; //allowed
    int mat1[ROW][COL]={{1,1},{1,2},{2,1},{2,2}}; //allowed
    int mat3[][COL]={{1,1},{1,2},{2,1},{2,2}}; // allowed
    int mat4[2][2];//declaration //allowed


    //int mat[][]={{1,1},{1,2},{2,1},{2,2}};// not allowed
    //int mat2[ROW][]={{1,1},{1,2},{2,1},{2,2}}; //not allowed  //   colum size is must  compile time error 
    return 0;
}
*/



/*

int main()
{
    int a[2] [2];
    printf("\nEnter array elements ");
    int i,j;
    for(i=0;i<2;i++)// 2d array so nested for loop
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);

        }

    }
    printf("\n Base address : %u",a);
    printf("\n array elements \n ");
    for(i=0;i<2;i++)// 2d array so nested for loop
    {
        for(j=0;j<2;j++)
        {
            printf("\n%d at %u",a[i][j],&a[i][j]);
            
        }

    }
    return 0;
}

*/



/*
void accept(int mat[2][2]);// void function
int main()
{
    int a[2][2];
    accept(a);// function  calling  
    return 0;
}
void accept(int mat[2][2])
{
    
    int i,j;
    printf("\nEnter array elements ");
    for(i=0;i<2;i++)// 2d array so nested for loop
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&mat[i][j]);

        }
    }
    printf("\n Base address : %u",mat);
    printf("\n array elements \n ");
    for(i=0;i<2;i++)// 2d array so nested for loop
    {
        for(j=0;j<2;j++)
        {
            printf("\n%d at %u",mat[i][j],&mat[i][j]);
            
        }
    }
}
// formal arguments name = mat
// actual arguments name=a
// 2d array with function // 

// output
// Base address : 6422288
//  array elements

// 1 at 6422288
// 2 at 6422292 
// 3 at 6422296
// 4 at 6422300
*/