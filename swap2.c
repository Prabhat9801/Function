#include<stdio.h>

int main(){
    int a;
    int b;
    printf("Enter a = ");
    scanf("%d",&a); 
    printf("Enter b = ");
    scanf("%d",&b);
    int t=a;
    a=b;
    b=t;
    
    
    printf("a = %d and b = %d \n",a,b);
    return 0;
}