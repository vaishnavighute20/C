#include<stdio.h>
int main()
{
    printf("Enter the number for table as you want to print \n");
    int a;
    scanf("%d",&a);
     for(int i=1;i<=10;i++)
   {
     printf("%d\n",i*a);
   }
}
