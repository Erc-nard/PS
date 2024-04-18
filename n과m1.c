#include <stdio.h>
#include <stdlib.h>

void pick( int n, int* bucket, int bucketSize, int k ) { //중복 조합
int i, lastIndex, smallest, item;
    if(k == 0 ) { 
        for (i = 0; i < bucketSize; i++)
            printf("%d ", bucket[i]); 
        printf("\n");
        return;
    } 
    lastIndex = bucketSize - k - 1; // 가장 최근에 뽑힌 수가 저장된 위치 index

    for(item = 1; item < n+1; item++) {   
        int j = 0; int flag = 0;
        for( j=0; j <= lastIndex; j++ )       
            if ( bucket[j] == item )  flag = 1;
            if( flag == 1 ) continue;
            bucket[lastIndex + 1] = item;
        pick(n, bucket, bucketSize, k - 1);
    }
}

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int bucket[8];
    pick(n,bucket,m,m);
}