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
   for(int i=0;i<=n;i++){
    for(int j=0;j<=i;j++){
        int x=ncr(i,j);
        printf("%d  ",x);

    }
    printf("\n");
   }
  
}
