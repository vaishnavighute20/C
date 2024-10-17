#include<stdio.h>
#include<stdlib.h>
/*
int main()
{
    int i;
    for(i=1;i<10;i++)//for(initialization;condition;modification)
    printf("%5d",i); //  1    2    3    4    5    6    7    8    9

    return 0;
}
*/

/*
int main()
{
    int i=1; // we can initialize at initial stage
    for(;i<10;i++)//if we not initialize inside for loop it works fine but semicolon is must inside for loop for initialization
    printf("%5d",i);// 1    2    3    4    5    6    7    8    9
    return 0;
}

*/

/*
int main()
{
    int i=1; // we can initialize at initial stage
    for(;i<=5;)//if we not initialize inside for loop it works fine
    {
        printf("%5d",i);// 1    2    3    4    5
        i++;//modification is fine outside for block
    }
   
    return 0;
}
*/

/*
int main()
{
    int i;
    for(i=0;i<=10;i+=2) //even number
    printf("%5d",i); // 0    2    4    6    8   10
    return 0;
}
*/


/*
int main()
{
    int i;
    for(i=1;i<=10;i+=2) //odd number
    printf("%5d",i); //  1    3    5    7    9
    return 0;
}

*/

/*
//due to  semicolon after for loop the last updated value is printed as output
int main()
{
    int i;
    for(i=0;i<=3;i++);  // due to this semicolon after for loop the last updated value is printed as output
    printf("%5d",i); // 4
    return 0;
}
*/


//whenever we want to print pattern related program we go with nested for loop
// NESTED  FORLOOP

/*
int main()
{
    int i,j;
    for(i=0;i<5;i++)//outer loop
    {
        for(j=0;j<2;j++)//inner loop
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

/*
int main()
{
    int i,j;
    for(i=0;i<5;i++)//outer loop
    {
        for(j=0;j<i;j++)//inner loop
        {                //
            printf("*"); // *
                         // **
  }                     //  ***
                       //   ****
                        
        printf("\n");
    }
    re\turn 0;
}

*/


/*//break
int main(void)
{
    int x=10,y=5,ans;
    while(y-->=1,x-->=1)
    {
        if(y==0)
            break;
        ans=x/y;
        printf("%d / %d =%d \n",x,y,ans);   
        
    }                                       
    printf("\n Out of while loop \n");       
    return 0;                                
}
//output 
//9 / 4 =2 
//8 / 3 =2 
//7 / 2 =3
//6 / 1 =6
// Out of while loop

*/

/**/

/*
// due to continue it executes upto both the condition satisfy
int main(void)
{
    int x=10,y=5,ans;
    while(y-->=1,x-->=1)
    {
        if(y==0)
            continue;
        ans=x/y;
        printf("%d / %d =%d \n",x,y,ans);   
        
    }                                       
    printf("\n Out of while loop \n");       
    return 0;                                
}
//output
//9 / 4 =2 
//8 / 3 =2   
//7 / 2 =3   
//6 / 1 =6   
//4 / -1 =-4 
//3 / -2 =-1 
//2 / -3 =0  
//1 / -4 =0
//0 / -5 =0

 //Out of while loop
 */


/**/





