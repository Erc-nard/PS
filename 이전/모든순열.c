#include <stdio.h>

void permutation(int n,int* bucket,int size,int pick){

    if(pick==0){
        for(int i=0;i<size;i++)
            printf("%d ",bucket[i]);
        printf("\n");
    }

    int now=size-pick;
    for(int i=1;i<=n;i++){ //zerokara hajimaru
        int flag=0;
        for(int j=0;j<now;j++)
            if(bucket[j]==i)
                flag=1;
        if(flag==1) continue; //flag0 tokini ireru yori 1tokini continue surunoga ii
        bucket[now]=i;
        permutation(n,bucket,size,pick-1);
    }
}

int main(){
    int n;
    int bucket[8];
    scanf("%d",&n);
    permutation(n,bucket,n,n);
}