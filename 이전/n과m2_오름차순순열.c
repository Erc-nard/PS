#include <stdio.h>
int pick(int n,int* bucket,int bucketSize,int toPick){
	
	if(toPick==0){
		for(int i=0;i<bucketSize;i++)
			printf("%d ",bucket[i]);
			printf("\n");
		}
		
		for(int i=1;i<=n;i++){
			int flag=0;
			for(int j=0;j<bucketSize-toPick;j++){
				if(bucket[j]==i) flag=1;
				}
			if(flag==1) continue;
			if(bucketSize!=toPick&&bucket[bucketSize-toPick-1]>i)continue;
			bucket[bucketSize-toPick]=i;
			pick(n,bucket,bucketSize,toPick-1);
			}
	}
int main()
{
	int n,m;
	int bucket[8];
	scanf("%d %d",&n,&m);
	
	pick(n,bucket,m,m);
	
}
