#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void pick( int n, int a[],int* bucket, int bucketSize, int k,int total,int *count ) {
    int i, lastIndex, smallest, item;
    if(k == 0 ) { 
        int tot=0;
        for (i = 0; i < bucketSize; i++){
            tot+=a[bucket[i]];
           //printf("%d ",a[bucket[i]]);
        }
        //printf("tot=%d\n",tot);

        if(tot==total)(*count)++;
        return;
    } 
    lastIndex = bucketSize - k - 1; // 가장 최근에 뽑힌 수가 저장된 위치 index
    if (bucketSize == k ) 
        smallest = 0; 
    else 
        smallest = bucket[lastIndex] + 1;
    for(item = smallest; item < n; item++) {
        bucket[lastIndex + 1] = item;
        pick(n, a, bucket, bucketSize, k - 1,total,count);
    }
}


int main() {
	int n,s;
	scanf("%d %d", &n,&s);
    int a[20];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    int bucket[20]; //*m해주기
    int count=0;
    for(int i=1;i<n+1;i++)
        pick(n, a, bucket, i, i,s,&count);
    printf("%d",count);

}