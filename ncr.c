#include<stdio.h>
int fact(int n){
     int f=1;
  
for(int i=n;i>=1;i--){
    f=f*i;

}
    return f;
}
int ncr(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}

int main (){
    int n;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    int r;
    printf("Enter the value of r = ");
    scanf("%d",&r);
    int ans=ncr(n,r);
    printf("%d",ans);
    
    
}
