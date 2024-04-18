#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void pick( int n, int a[],int* bucket, int bucketSize, int k,int *all ,int* len) {
    int i, lastIndex, smallest, item;
    if(k == 0 ) {
        int tot=0;
        for (i = 0; i < bucketSize; i++){
            tot+=a[bucket[i]];
        }
        all[*len]=tot;
        (*len)++;
        return;
    } 
    lastIndex = bucketSize - k - 1; // 가장 최근에 뽑힌 수가 저장된 위치 index
    if (bucketSize == k ) 
        smallest = 0; 
    else 
        smallest = bucket[lastIndex] + 1;
    for(item = smallest; item < n; item++) {
        bucket[lastIndex + 1] = item;
        pick(n, a, bucket, bucketSize, k - 1,all,len);
    }
}
void insertionSort(int* A, int n) //배열 A을 정렬한다 
{ 
int i;
int j, k, temp;
for (i = 1 ; i < n ; i++)
{
for (j = 0; j < i; j++)
if (A[j] > A[i]) break;
temp = A[i];
for (k = i; k > j; k--)
A[k] = A[k-1];
A[j] = temp;
}
}

int main() {
	int n;
	scanf("%d", &n);
    int a[20];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    int *bucket=(int*)malloc(sizeof(int)*2000000); //*m해주기
    int *all=(int*)malloc(sizeof(int)*2000000);
    int len=0;
    for(int i=1;i<n+1;i++)
        pick(n, a, bucket, i, i,all,&len);
    insertionSort(all,len);

    for(int j=0;j<len;j++){
        
        if(all[0]>1){printf("1");break;}
        if(j>0){
            if((all[j]-all[j-1])>1){printf("%d",all[j-1]+1);break;}
        }
        if(j==len-1){printf("%d",all[j]+1);break;}
    }
    free(bucket);
    free(all);
   
} //시간초과 .. 나중에 다시