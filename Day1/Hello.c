#include<stdio.h> 
#include<stdlib.h>
int main()
{
        int a,b;
        printf("Please Enter Two Numbers:\n");
        scanf("%d\n%d",&a,&b);
        int sum=a+b;
        printf("sum of two numbers: %d+%d=%d\n",a,b,sum);
        int subtraction=a-b;
        printf("subtraction of two numbers: %d-%d=%d\n",a,b,subtraction);
        int multiplication=a*b;
        printf("multiplication of two numbers: %d*%d=%d\n",a,b,multiplication);
        int division=a/b;
        printf("division of two numbers: %d/%d=%d\n",a,b,division);
        int mod=a/b;
        printf("mod of two numbers: %dmod%d=%d\n",a,b,mod);
        return 0;
}



/*
int main()
{
    printf("Hello Word");
    return 0;
}
*/
