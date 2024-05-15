#include <stdio.h>

void pick(int*a, int n,int* bucket,int bucketSize,int toPick){
	
	if(toPick==0){
		for(int i=0;i<bucketSize;i++)
			printf("%d ",a[bucket[i]]);
		printf("\n");
        return;
	}

    for(int i=0;i<n;i++){
        int flag=0;
        for(int j=0;j<bucketSize-toPick;j++){
            if(bucket[j]==i) flag=1;
        }
        if(flag==1) continue;
        if(bucketSize!=toPick&&bucket[bucketSize-toPick-1]>i)continue;
        bucket[bucketSize-toPick]=i;
        pick(a,n,bucket,bucketSize,toPick-1);
        }
}
void sort(int*a,int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main()
{
	int n,m;
    int a[8];
	int bucket[8];
	scanf("%d %d",&n,&m);

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
	sort(a,n);
	pick(a,n,bucket,m,m);
	
}
