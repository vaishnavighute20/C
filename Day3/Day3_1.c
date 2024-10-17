#include<stdio.h>
#include<stdlib.h>
/*
int main()
{
    int d=30; // d is a variable name and %d is format specifier for int
    float f=50;// f is a variable name and %f is format specifier for float
    printf("d=%d\n",d);
    printf("f=%f",f);
    return 0;
}
*/
// ASCII: American Standard code for information interchange
//A-Z   65-90
//a-z   97-122
//0-9   48-57
/*
int main()
{
    char ch='A';
    printf("Character value = %c",ch);
    printf("\n Size of character = %d",sizeof(ch)); 

    return 0;
}
*/

/*
int main()
{
char ch1='a';
char ch2='b';
//printf("%d",ch); //'"a" ascci value is 97
printf("\nch1 = %c, Ascci value of ch1=%d",ch1);
printf("\nch2 = %c,Ascci value of ch2=%d",ch2);

return 0;
}
*/


int main()
{
    char ch='A';
    printf("Ch=%c Ch=%d sizeof(ch)=%d",ch,ch,sizeof(ch));
    printf("\nsizeof(char)=%d ",sizeof(char));
    printf("\nsizeof('B')=%d",sizeof('B'));
                         //'B'    ie  if we give hardcoded value
                         //66
                         // integer number 4 byte    
    
    return 0;
}





