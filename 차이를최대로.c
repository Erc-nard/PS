#include <stdio.h>

void pick( int n, int* bucket, int bucketSize, int k ,int *max,int a[]) { //중복 조합
    int i, lastIndex, smallest, item;
    if(k == 0 ) { 
        int total=0;
        int now;
        for (i = 0; i < bucketSize-1; i++){
            now=a[bucket[i]]-a[bucket[i+1]];
            if(now<0) total+=(-now);
            else total+=now;
            //printf("%d %d\n",total,now);
        }
        if(total>*max) *max=total;
        //printf("---");
        return;
    } 
    lastIndex = bucketSize - k - 1; // 가장 최근에 뽑힌 수가 저장된 위치 index
    smallest = 0;
    for(item = smallest; item < n; item++) {   
        int j = 0; int flag = 0;
        for( j=0; j <= lastIndex; j++ )       
            if ( bucket[j] == item )  flag = 1;
        if( flag == 1 ) continue;
        bucket[lastIndex + 1] = item;
        pick(n, bucket, bucketSize, k - 1,max,a);
    }
}
int main(){
    int n;
    int a[8];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int bucket[10];
    int max=-1000;
    pick(n,bucket,n,n,&max,a);
    printf("%d",max);
}