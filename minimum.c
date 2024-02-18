#include<stdio.h>
int min(int x,int y){
    if(x<y) return x;
    else return y;
}
int main(){
    int a,b,m;
    printf("Enter the value a=");
    scanf("%d",&a);
    printf("Enter the value b=");
    scanf("%d",&b);
    m=min(a,b);
    printf("The minimum number between %d and %d is %d",a,b,m);
    return 0; 


}