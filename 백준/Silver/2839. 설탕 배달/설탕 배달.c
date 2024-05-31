#include <stdio.h>
#include <stdlib.h>

int sugar(int n,int*memo,int f){

    if(n==0) return memo[n]+1;
    if(n==1) return 0;

    if(memo[n]!=0) return memo[n]+1;

    if(n>=5){
        memo[n]=sugar(n-5,memo,n);
    }
    if(n>=3){            
        int three=sugar(n-3,memo,n);
        if(three>0){
        if(memo[n]!=0){
            if(memo[n]>three)
                memo[n]=three;
        }
        else memo[n]=three;
        }
    }
    //printf("%d %d\n",n,memo[n]);
    if(memo[n]==0) return 0;
    if(n==f) {return memo[n];}
    return memo[n]+1;
}

int main(){
    int n;
    scanf("%d",&n);

    int* memo=(int*)malloc(sizeof(int)*(n+1));
    for(int i=0;i<n+1;i++)
        memo[i]=0;
    int num=sugar(n,memo,n);
    if(num==0) printf("-1");
    else
        printf("%d",num);
    free(memo);
    return 0;
}