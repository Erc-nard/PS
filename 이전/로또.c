#include <stdio.h>

void pick(int items[],int itemsize,int* bucket, int bucketSize, int k)
{
	int smallest;

	if (k == 0) // trivial case
	{
		for (int j = 0; j < bucketSize; j++) {
			printf("%d ", items[bucket[j]]);
		}
		printf("\n");
	} 
	// k > 0
	int lastIndex = bucketSize - k - 1;
    if(bucketSize==k) smallest=0;
    else smallest=bucket[lastIndex]+1;

	for (int i = smallest; i < itemsize; i++)
	{   
		bucket[lastIndex + 1] = i;
		pick(items,itemsize,bucket, bucketSize, k - 1);
	}
}

int main() {
	int k,s;
    int items[13];
    int bucket[13]; 
    while(1){
	    scanf("%d", &k);
        if(k==0) break;

        for(int i=0;i<k;i++){
            scanf("%d",&items[i]);
        }
        pick(items,k,bucket, 6, 6);
        printf("\n");
    }

}