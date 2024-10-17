#include<stdio.h>
int main(){
    printf("Here now i m finding the lcm of two numbers\n");
    int a,b;
    scanf("%d\n%d",&a,&b);
int result=0;
int hcf=0;
for(int i=1;i<=a&&i<=b;i++){
    if(a%i==0&&b%i==0){
        hcf=i;
    }
}
result=a*b;
int lcm =result/hcf;
printf("lcm of two number is %d\n",lcm);
printf("hcf of two number is %d",hcf);
}

