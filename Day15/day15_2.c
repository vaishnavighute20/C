#include<stdio.h>
#include<stdio.h>
#include<string.h>


//   string function   //
// string operations are done by library function and the functions are decleared in "string.h"
// the functions are  :=
// strlen =  to calculate string length
// strcpy = to copy the contents from one string to another string
// strcat = string concatination which is used to combine two string
// strcmp = string comparison    ie it gives difference between ascci value it compare character by character 
//and where ever it got difference it gives difference between ascii value
// Strrev = to reverse the string
// strstr = find the sub string
// strchr = to find the character is available in string or not






//0.EXIT 1.LENGTH 2.FIND CHARACTER 3.CONCAT 4.STRING COMPARE 5.SEARCH STRING 6.STRING COPY

/*
int main(void)
{

    int choice;
    int val;
    char src[20];
    char dest[20];
    char ch;
    char *ptr=NULL;
    //char *src;
    int len;
    do
    {+=
        printf("Enter choice : ");
        printf("\n 0.EXIT 1.LENGTH 2.FIND CHARACTER 3.CONCAT 4.STRING COMPARE 5.SEARCH STRING 6.STRING COPY \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("\n Enter the string : ");
            scanf("%s",src);
            len=strlen(src);
            printf("Length of string = %d \n",len);
            break;

            case 2:
            printf("\n Enter the string : ");
            scanf("%s",src);
            printf("\n Enter Character to be searched : ");
            scanf("%*c");
            scanf("%c",&ch);

            //char *strchr(const char *__s, int __c)
                ptr=strchr(src,ch);
                if(ptr==NULL)
                printf("\n character is not found");
                else
                printf("\n character is found");
            
            break;
            case 3:
            printf("\n Enter the string1 : ");
            scanf("%s",src);
            printf("\n Enter the string2 : ");
            scanf("%s",dest);
            strcat(src,dest);
            printf("\n Resultant String = %s \n",src);
            break;

            case 4:
            printf("\n Enter the string1 : ");
            scanf("%s",src);
            printf("\n Enter the string2 : ");
            scanf("%s",dest);

            //int strcmp(const char *__s1, const char *__s2)
            val=strcmp(src,dest);
            printf("\n Value = %d \n",val);
            break;   

            case 5:

            printf("\n Enter the string : ");
            scanf("%s",src);
            printf("\n Enter string to be searched : ");
            scanf("%s",dest);

            //char *strchr(const char *__s, int __c)
                ptr=strstr(src,dest);
                if(ptr==NULL)
                printf("\n string is not found");
                else
                printf("\n string is found");
            
            break;    
            case 6:
            printf("\n Enter the string1 : ");
            scanf("%s",src);
           // strcpy(dest,src);
           strncpy(dest,src,5);
            printf("\n Destination String = %s Source String = %s \n",dest,src);
            break;

    


        }

    }while(choice!=0);

    return 0;

}
*/






// if we want to develop own string function then go with string stimulation
// string stimulation is exact replica of string function 