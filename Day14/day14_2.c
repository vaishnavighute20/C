#include<stdio.h>
#include<stdlib.h>


//  string  //
// string set of character

/*
int main()
{
    char ch[]="sunbeam";// string or character array
    // int i;
    // for(i=0;i<7;i++)
    // printf(" %c ",ch[i]);// s  u  n  b  e  a  m
    printf("%s",ch);//sunbeam
    return 0;
}
*/

/*
int main(void)
{
    char name[20];
    printf("\n Enter Name : ");
    scanf("%s",name);
    printf("Name = %s ",name);
    return 0;
}
*/


/*
int main(void)
{
    char name[10];
    printf("\n Enter Name ");
    gets(name); //accept the string 
    printf("\n Name : ");
    puts(name); //to display the string on concole
    return 0;
}
*/


/*
int main(void)
{
    char s[]="PreCAT-\0OM5";
    printf("s = %s ",s);
    printf("\n Sizeof(s)=%d \n",sizeof(s));
    return 0;
}
//   \0     is a null character so it will not print character after \0
*/


/*
int main(void)
{
    char str[]="Sunbeam";
    printf("str=%u &str[0]=%u",str,&str[0]);
    printf("\n *str=%c str[0]=%c",*str,str[0]);// *str=S str[0]=S
    //*str
    //value at base address in %c format

    printf("\n str=%s \n",str);//str=Sunbeam
    // printf("\n *str=%s \n",*str);
    //*str is a single character, not a string, so trying to print it as a string using %s is not valid.
     printf("\n str=%s \n",str);
   
    return 0;
} 
*/


/*
int main(void)
{
    char str[]="sunbeam";
    printf("\n%s",str+0);//sunbeam
    printf("\n%s",str+1); //baseaddress+1     //   unbeam
    printf("\n%s",str+2);//nbeam
    printf("\n%s",str+3);//beam
    printf("\n%s",str+4);//eam
    printf("\n%s",str+5);//am
    printf("\n%s",str+6);//m
    return 0;
}
*/

/*
int main(void)
{
    char str[]="sunbeam";
     printf("%c \n",*str+2); // u     //it prints 2 character ahead of base address
    printf("%c \n",*str+1);//  t
   printf("\n%c \n",*str+3);  //  v     pointer + strings
    printf("\n%c",*(str+1)+1);//  v    //  *u+1=v
    printf("\n%c",*(str+3)+2);//d
   
    return 0;
}
*/


/*
int main()
{
    // char ch[]="A";//valid declaration  due to The double quotes indicate a string literal.
    // char ch[]='A';//invalid initialization //  it should be in double quote
    // char ch[]={'A'};// valid initilization // character 'A' inside a pair of curly braces
   // char ch[]={a};// invalid  //single quotes missing
    //char ch1[]={"sunbeam"};//  valid
     char ch[]="sunbeam";//
    printf("my dream is to take admission in %s\n",ch);

    
    // char ch[]={'s','u','n','b','e','a','m'};//  valid
    return 0;

 }

*/

/*
int main(void)
{
    char *str="vaishnavi"; //valid declaration
    //string declaration using pointer size is always 4
    
    printf("%s",str);//vaishnavi
    printf("\n size = %d",sizeof(str));  //size =4
    printf("\n size = %d",sizeof("vaishnavi")); // size =10
    return 0;
}
// 
// in string by default null terminating character get add so size is 10
*/




/*
int main(void)
{
    char s1[]="sunbeam";
    char s2[]="sunbeam";
    if(s1==s2)
    printf("strings are same");
    else
    printf("strings are different");
    return 0;
}
// == compares the addresses of the arrays, not their contents
//output =strings are different  
*/


/*
int main(void)
{
    char *s1="sunbeam";
    char *s2="sunbeam";
    if(s1==s2)
    printf("strings are same");
    else
    printf("strings are different");
    return 0;
}
// outout = strings are same   
// it prints contents at that location     
  */  
 


/*
int main(void)
{
    char *s1="sun";
    char *s2="sunbeam";
    //if(s1==s2)  //strings are different
    if(*s1==*s2)//strings are same // it compare only first letter ie ....  s   not whole string

    printf("strings are same");
    else
    printf("strings are different");
    return 0;
}
*/



/*
//  # is called as macros
// ie replacement text  ie where ever there is len is replaced by by value 20
#define LEN 20

int main(void)
{
    char city1[LEN]="pune";// if already in string character there is no need to add \0 because by default \0 is added 
    char city2[LEN]={'k','a','r','a','d','\0'};

    char city3[]="Mumbai";// it takes  \0   by default as it is string character
    // if i explictly put \0 then it gives size as 8  
    //char city4[]={'k','a','r','a','d'};//invlaid

    char city5[]={'p','u','n','e','\0'};

    printf("\n city1=%s sizeof(city1)=%u ",city1,sizeof(city1));// city1=pune sizeof(city1)=20
    printf("\n city2=%s sizeof(city2)=%u ",city2,sizeof(city2));//  city2=karad sizeof(city2)=20

    printf("\n city3=%s sizeof(city3)=%u  ",city3,sizeof(city3));//  city3=Mumbai sizeof(city3)=7

   // printf("\n city4=%s sizeof(city4)=%u ",city4,sizeof(city4));
   // if we are declaring a character array and size is not mentioned and set of characters are in curly braces
   // then it is complusary to include \0   otherwise it will print upto first occurance of \n or /0 or

    printf("\n city5=%s sizeof(city5)=%u \n ",city5,sizeof(city5));// city5=pune sizeof(city5)=5

    return 0;

}

*/



