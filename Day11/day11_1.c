#include<stdio.h>
#include<stdlib.h>
/*
// function calling itself called as recurssive function  generally we avoid using recurssive function because this need more stack area
int fact (int num);
int fact_rec(int num);

int main()
{
    int n;
    int result;
    printf("\nEnter  Numeric Value :");
    scanf("%d",&n);
    result=fact(n);
    printf("Factorial=%d\n",result);
    return 0;
}
       int fact(int num)

{
    int ans=1;     //  if i enter num = 4
    while(num)   //        while(4) while(3) while(3) while(1)
    {
        ans=ans*num; //    1*4     4*3     12*2     24*1
        num--;//           4--     3--      2--      1--
    }
            return ans;int fact (int num);
}

*/


  /* 
int fact_rec(int num);

int main()
{
    int n;
    int result;
    printf("\nEnter  Numeric Value :");
    scanf("%d",&n);
    // result=fact(n);
    result=fact_rec(n);
    printf("Factorial=%d\n",result);
    return 0;
}
int fact_rec(int num)
{
    if(num==1)
    return 1;
    else
    return num*fact_rec(num-1);
}
*/


