#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void pick(char* pw, int pwSize, int* bucket, int bucketSize, int toPick) {

    if (toPick == 0) {
        for (int i = 0; i < bucketSize; i++)
            printf("%c", pw[bucket[i]]);
        printf("\n"); 
    }

   
	int lastIndex=bucketSize-toPick;
	
    for (int i = 0; i < pwSize; i++) { 
    	int flag=0;
    	for(int j=0;j<lastIndex;j++){
    		if(bucket[j]==i) flag=1;
    		}
    		if(flag==1) continue;
        //if(i!=0&&(int)pw[i]<=(int)pw[bucket[lastIndex-1]]) continue;
      	
        bucket[lastIndex] = i;
        pick(pw, pwSize, bucket, bucketSize, toPick - 1);
    }
}

sort(char* pw, int n){
	int temp;
	for (int i = 0; i < n-1; i++) { 
        for (int  j = 0; j < n-1-i; j++) {
        	   if(pw[j]>pw[j+1]){
        	   temp=pw[j];
    			pw[j]=pw[j+1];
    			pw[j+1]=temp;}
        	}
        }
}

int main() {
    int L, C;
    char pw[15];
    int bucket[15];
    scanf("%d %d", &L, &C);

    for (int i = 0; i < C; i++) 
        scanf("%s", &pw[i]);
	
	sort(pw,C);
    //중간에 정렬하는거 넣기

    pick(pw, C, bucket, L, L);
    
}
