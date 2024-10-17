#include<stdio.h>
#include<stdlib.h>

// dynamic memory allocation    //  ie at time of runtime   
// takes memory from heap section
//main difference between malac and calac is memory initilization
//ie malloc initializes to garbage value and calloc initializes to zero
// calloc allocate contigious memory 

/*
int main()
{
    int n;
    int i;
    int *ptr=NULL;
    printf("\nenter number number of elements you wish to insert in an array :");
    scanf("%d",&n);

    //1. REQUEST MEMORY DYNAMICALLY

    ptr=(int *)malloc(sizeof(int)*n);  // it takes only 1 argument ie... sizeof
    //void *__cdecl malloc(size_t)  // malloc has return type void so here we have to type cast as (int *)
    // and to store address we have to use pointer   ie ptr
    // size_t is typedef given to datatypes
    //please allocate n blocks of sizeof(int)data
    
    if(ptr==NULL)
   {
       printf("\n Memory can not be allocated");
       return 0;
   }

   //2.If memory is allocated successfully then use that memory
   
   else
   {
       printf("\n Enter %d Array elements : ",n);
       for(i=0;i<n;i++)
        scanf("%d",&ptr[i]);
        printf("Array elements are : ");
        for(i=0;i<n;i++)
        printf("\n ptr[%d]=%d at &ptr[%d]=%u",i,ptr[i],i,&ptr[i]);
    }

    //3.release the dynamic memory

    free(ptr);//dangling pointer  >>>>>>pointer which is not pointing to any memory location 
    ptr=NULL; //to avoid memory leakage >>>>>>>>>can be used by any other 
    return 0;
}

*/




/*
int main(void)
{ 
   int n;
   int i;
   int *ptr=NULL;

   printf("\n enter number of elements you wish to insert in an array : ");
   scanf("%d",&n);
   
   
   //1. REQUEST MEMORY DYNAMICALLY

    ptr=(int *)calloc(n,sizeof(int));
    //void *calloc(size_t __nmemb, size_t __size)
     // calloc function takes two arguments
   if(ptr==NULL)
   {
       printf("\n Memory can not be allocated");
       return 0;
   }


   //2.If memory is allocated successfully then use that memory
   else
   {
       printf("\n Enter %d Array elements : ",n);
       for(i=0;i<n;i++)
        scanf("%d",&ptr[i]);
        printf("Array elements are : ");
        for(i=0;i<n;i++)
        printf("\n ptr[%d]=%d at &ptr[%d]=%u",i,ptr[i],i,&ptr[i]);
    
    }

    //3.release the dynamic memory
    free(ptr);//dangling pointer
    ptr=NULL; // avoid memory leakage 
        return 0;
}

*/