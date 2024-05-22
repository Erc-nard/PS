#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int pick(int n,int*bucket,int bucketSize,int toPick,int tot,int*min,int *m) {
	int now=n;
	int all=tot;

	if (tot == 0) {
        //printf("zerodesu min:%d\n",*min);
		if (*min > bucketSize - toPick) 
			*min = bucketSize - toPick;
		return *min;
	}

if(tot>-1){
	for (int i = 0; i < n; i++) {
		all=tot;
		if (all - ((n-i) * (n-i)) >= 0) { //최대 제곱수
//printf("n-i:%d n:%d\n",n-i,n);
			bucket[bucketSize - toPick] = (n - i);
			all -= ((n - i) * (n - i));
			for (int i = 0; i < all; i++) {
				if ((all - i) * (all - i) < all) {
					now = i;
					break;
				}
			}
			if(m[now]==-1)
				m[now]=pick(now, bucket, bucketSize, toPick - 1, all, min,m);
			else if(bucketSize - toPick+m[now]<*min) *min=bucketSize - toPick+m[now];
		}
	}
}
return *min;
}


int main(void)
{
	int n;
	int min = 1000000;
    int flag=0;
	scanf("%d", &n);
	int* bucket = (int*)malloc(sizeof(int) * n);
	int* m = (int*)malloc(sizeof(int) * (n+1));
	for(int i=0;i<n;i++)
		m[i]=-1;
	if (n > 316) {
		int now;
		for (int i = 0; i <= 316; i++) {
			if (((316 - i) * (316 - i)) < n) {
				now = 316 - i; //최대제곱수
				break;
			}
            else if(((316 - i) * (316 - i)) == n){
                flag=1;
                break;
            }
		}
		//printf("%d\n", now);
        if(flag==1) min=1;
		else pick(now, bucket, n, n, n,&min,m);
	}
	else {
        int flag=0;
        for (int i = 1; i <= 316; i++){
            if(i*i==n){
                min=1;
                flag=1;
                break;
            }
        }
        if(flag==0) 
		pick(n, bucket, n, n, n,&min,m);
	}
	printf("%d", min);
	free(bucket);
    free(m);
}

