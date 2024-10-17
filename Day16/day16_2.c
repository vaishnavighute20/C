#include<stdio.h>
#include<stdlib.h>

// commond line arguments   //

/*
int main(int argc,char *argv[])
{
    int i;
    printf("\nArgument count =%d",argc);//Argument count =1
    for(i=0;i<argc;i++)
    {
         printf("\nargv[%d]=%s\n",i,argv[i]);
    }

    return 0;
}

// argc represents number of arguments passed to program when it is executed from command line.
// • argv represents argument vector or argument values.
*/



/*
int main(int argc,char *argv[],char *env[])
{
    int i;
    for(i=0;i<30;i++)
    {
        printf("env[%d]=%s \n",i,env[i]);
    }
    return 0;
}



// • envp represents system information.
*/


/*

//./a.exe 20 10
// output sum = 30
int main(int argc,char *argv[])
{
    int i;
    int sum=0;
    for(i=1;i<argc;i++)
    sum=sum+atoi(argv[i]);
    //argv is in string format
    //string to int(atoi)   // atoi converts string to int
    //  0+20====sum===>20
    // sum+argv[2]===>20+10===30===>sum
    printf("\n Sum=%d",sum);
    return 0;
}

*/