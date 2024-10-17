#include<stdio.h>
#include<stdlib.h>


// not in use now a days
// jump statement

int main()
{
    int num;
    printf("enter num");
    scanf("%d",&num);
    if (num==5)
    {
        goto label;
    }
    label:printf("this is goto label");
    
   
     return 0;

}