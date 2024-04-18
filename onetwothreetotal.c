#include <stdio.h>

void pick(int n, int* plama,int* bucket, int bucketSize, int k,int *num) { //중복 조합
    int i, lastIndex, item;
    if (k == 0) {
        (*num)+=1;
    }
    lastIndex = bucketSize;
    for (i = 0; i < n; i++) {
        if ((k - plama[i]) >= 0) {
            bucket[bucketSize] = i;
            pick(n, plama, bucket, bucketSize + 1, k - plama[i],num);
        }
    }
}
int main() {
	int t,n;
	scanf("%d", &t);
    int a[] = { 1, 2, 3 };
    int bucket[10]; 
    for(int i=0;i<t;i++){
        int num=0;
        scanf("%d",&n);
        pick(3, a,bucket,0, n,&num);
        printf("%d\n",num);
    }
    return 0;
}