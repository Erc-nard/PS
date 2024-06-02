#include <stdio.h>
#include <stdlib.h>

void pick(int*T,int*P,int now,int date,int*bucket,int bucketsize,int*max){


    if(now<=(date)){
        int tot=0;
        for(int i=0;i<bucketsize;i++){
            tot+=P[bucket[i]];
        }
        if(*max<tot) *max=tot;
    }

    for(int i=now;i<date;i++){
        int flag=0;
        for(int j=0;j<bucketsize;j++){
            if(bucket[j]==i) flag=1;
            if(bucket[j]>i) flag=1;
        }
        if(flag==1) continue;
        bucket[bucketsize]=i;
        pick(T,P,i+T[i],date,bucket,bucketsize+1,max);
    }
}

int main(){
    int n,max=-1;
    scanf("%d",&n);
    int* T=(int*)malloc(sizeof(int)*n);
    int* P=(int*)malloc(sizeof(int)*n);
    int * bucket=(int*)malloc(sizeof(int)*n);

    for(int i=0;i<n;i++){
        scanf("%d",&T[i]);
        scanf("%d",&P[i]);
    }

    pick(T,P,0,n,bucket,0,&max);
    printf("%d",max);

    free(T);
    free(P);
    free(bucket);
}