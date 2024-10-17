#include<stdio.h>
#include<stdlib.h>


//    STRUCTURE     //
/*
struct Student //declaration of structure
{
    int rn;
    int marks;
    int per;
};
//Student is structure name
//rn, marks, per are members/data memebers/elements of structure

int main(void)
{
    //TO ACCESS THE MEMBERS/ELEMENTS OF STRUCTURE
    //WE NEED TO CREATE STRUCTURE VARIABLE

    struct Student s1; //s1 is structure variable
    s1.rn=1;
    s1.marks=80;
    s1.per=75;

    printf("RN=%d Marks=%d Per=%d",s1.rn,s1.marks,s1.per);//RN=1 Marks=80 Per=75

    return 0;
}
*/



/*
struct Student
{
    int rn;
    int marks;
}s1; //s1 is called as strutrue variable at the time of declaration
int main(void)
{
    s1.rn=10;
    s1.marks=80;
    printf("\n Roll no: %d Marks : %d \n",s1.rn,s1.marks);// Roll no: 10 Marks : 80
    return 0;
}

*/


/*
struct Student
{
    int rn;
    int marks;
}s1={1,90};
 //s1 is called as strutrue variable 
 //and it is initialized at the time of declaration
int main(void)
{
    printf("\n Roll no: %d Marks : %d \n",s1.rn,s1.marks);// Roll no: 1 Marks : 90
    return 0;
}
*/



/*
struct Student
{
    int rn;
    int marks;
}s1,s2;

int main(void)
{
    s1.rn=1;
    s1.marks=80;

    //copying the contents element by element
     //s2.rn=s1.rn;
    // s2.marks=s1.marks;


    s2=s1; //copy contents of s1 into s2


    printf("\n S1 : Roll no: %d Marks : %d \n",s1.rn,s1.marks);// S1 : Roll no: 1 Marks : 80 
    printf("\n S2 : Roll no: %d Marks : %d \n",s2.rn,s2.marks);// S2 : Roll no: 1 Marks : 80 
    return 0;
}
*/


/*
struct Employee
{
    int id;
    int salary;
};

int main(void)
{
    struct Employee e1;
    printf("\n Enter Emp id:");
    scanf("%d",&e1.id);

    printf("\n Enter Emp Salary:");
    scanf("%d",&e1.salary);

    printf("\n ID=%d Salary = %d \n",e1.id,e1.salary);
    return 0;
}
*/



/*
typedef struct Employee
{
    int id;
    int salary;

}EMP; //EMP is nick name given to struct Employee we can not define variable here

int main(void)
{
    struct Employee real; //real is struture variable creation using real name
    
    real.id=1;
    real.salary=60000;

    EMP nick_name; // created a structure varibale using nick name EMP
    nick_name.id=2;
    nick_name.salary=70000;
  
}
*/



/*
struct //Anonymous struture
{
    int num1;
    int num2;
};  // but it is valid 

int main(void)
{
    num1=20;
    num2=10;  // we can not access elements of anonymous structure directly
}

*/




/*
typedef struct  //anonymous structure having only nick name
{
    int num1;
    int num2;
    
}TEST; //TEST is Nick Name given to anonymous structure
int main(void)
{
    TEST t;

    t.num1=10;
    t.num2=20;
    printf("%d %d",t.num1,t.num2);//10 20
    return 0;
}
*/



/*
typedef struct Employee
{
    int id;
    char name[20];
    int salary;
}EMP;

int main(void)
{
    struct Employee e[3]; //array of structure
    int i;
    printf("\n Enter details of Employees : ");
    for(i=0;i<3;i++)
    {
        printf("Enter ID : ");
        scanf("%d",&e[i].id);

        printf("Enter Name : ");
        scanf("%s",e[i].name);
        
        printf("Enter Salary : ");
        scanf("%d",&e[i].salary);
   }
    printf("\n Details of Employees are : \n ");
    for(i=0;i<3;i++)
    {
        printf("ID : %d Name = %s Salary = %d \n",e[i].id,e[i].name,e[i].salary);
    }
    return 0;
}
*/



/*
typedef struct Employee
{
    int id;
    char name[20];
    int salary;
}EMP;

int main(void)
{
    EMP e1={1,"Akshita",80000};//e1 structure variable
    struct Employee *ptr=&e1;//ptr is pointer variable of type struct Employee
    printf("\n Accessing elements through struture variable (dot operator)\n");
    printf("%d %s %d",e1.id,e1.name,e1.salary);

    printf("\n Accessing elements through pointer(arrow operator)\n");
    printf("%d %s %d",ptr->id,ptr->name,ptr->salary);

    return 0;
}
*/


/*
int* update(int *ptr) 
{
     int number=10;
      *ptr=number + *ptr; 
      return ptr;   
} 
int main(void)
 { int *ptr;
  int num=10;
     ptr = update(&num); 
   printf("%d",*ptr); 
   return 0;
   }
   */