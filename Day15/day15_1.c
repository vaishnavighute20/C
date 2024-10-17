#include<stdio.h>
#include<stdio.h>

/*
int hcf(int n1, int n2);
int main() 
{
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("G.C.D of %d and %d is %d.", n1, n2, hcf(n1, n2));
    return 0;
}

int hcf(int n1, int n2)
 {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}
*/



/*

int main()
{
    char str[20];
    printf("\n Enter string");
    scanf("%s",str);
    printf("string=%s",str);
    return 0;
 // it read only up to single space or new line character
}
*/



/*
int main()
{
    char str[20];
    printf("\n Enter string");
    scanf("%[^\n]s",str);// it will print upto occurance of  ^\n
    printf("string=%s",str);
    return 0;
 
}

*/


/*
int main()
{
    char str[20];
    printf("\n Enter string");
    scanf("%[^.]s",str);// it will print upto occurance of  .  and if . occures stop printing
    printf("string=%s",str);
    return 0;
 
}
*/


/*
int main()
{
    char str[20];
    printf("\n Enter string");
    scanf("%[0-9]s",str);// it will print  digit only if other character stop printing
    // it should start with digit only
    printf("string=%s",str);
    return 0;
}

*/


/*
int main()
{
    char str[20];
    printf("\n Enter string");
    scanf("%[^0-9]s",str);// it will print upto occurance of  digit  and if digit occures stop printing
    // but it should not start with 0
    printf("string=%s",str);
    return 0;
 
}
*/


/*
int main()
{
    char str[20];
    printf("\n Enter string");
    scanf("%[A-Z]s",str);// it will print only capital letter and should start from capital letter
    printf("string=%s",str);
    return 0;
}

*/



/*
int main()
{
    char str[20];
    printf("\n Enter string");
    scanf("%[^A-Z]s",str);// it will print upto first occurance of capital letter
    // it should not start with captal letter  //  it will also print digit , small letter  
    printf("string=%s",str);
    return 0;
}
*/


/*
int main()
{
    char str[20];
    printf("\n Enter string");
    scanf("%[a-z]s",str);// it will print only small letter  // and should start from small letter
    // if digit or capital letter occure then it stop printing
    printf("string=%s",str);
    return 0;
}

*/


/*
int main()
{
    char str[20];
    printf("\n Enter string");
    scanf("%[^a-z]s",str);// it will print upto first occurance of small letter
    // it should not start with small letter
    printf("string=%s",str);
    return 0;
}
*/



/*
int main()
{
    char str[20];
    printf("\n Enter string");
    scanf("%[^0-9]s",str);// it will print upto uptp digit occurance
    printf("string=%s",str);
    return 0;
 // ie capital and small letter
}
*/