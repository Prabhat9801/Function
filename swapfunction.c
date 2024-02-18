#include<stdio.h>
void swap(int* a,int* b){
    int t=*a;
   *a=*b;
    *b=t;
   
}
int main(){
    int x;
    int y;
    printf("Enter x= ");
    scanf("%d",&x);  
    printf("Enter y = ");
    scanf("%d",&y);
    swap(&x,&y);
    printf("x = %d and y = %d \n",x,y);
    return 0;
}