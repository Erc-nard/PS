#include <stdio.h>
#include <stdlib.h>

int fib(int n,int*F){
    if (n==1||n==2) return 1;
    if(F[n-1]==0)
        F[n-1]=fib(n-1,F);
    if(F[n-2]==0)
        F[n-2]=fib(n-2,F);
    return (F[n-1]+F[n-2])%10007;
}

int main(){
    int n;
    scanf("%d",&n);

    int* F=(int*)malloc(sizeof(int)*(n+1));
    for(int i=0;i<=n;i++)
        F[i]=0;
    printf("%d",fib(n+1,F));
}