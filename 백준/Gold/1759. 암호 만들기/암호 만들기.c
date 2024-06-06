#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void pick(char item[], int n, int bucket[], int m, int toPick){
	int i, lastIndex, smallest;

	if(toPick == 0) {
        int flag2=0, flag3=0;
        for(int i=0;i<m;i++){
            if(item[bucket[i]]=='a'||item[bucket[i]]=='e'||item[bucket[i]]=='i'||item[bucket[i]]=='o'||item[bucket[i]]=='u')
                flag2=1;
            else flag3+=1;
        }
        if(flag2==1&&flag3>1){
		for(i=0; i<m; i++)
			//printf("%d ", bucket[i]);
			printf("%c", item[bucket[i]]);
		printf("\n");
        }
		return;

	}

	lastIndex = m - toPick - 1;

	if(m == toPick)
		smallest = 0;
	else
		smallest = bucket[lastIndex] + 1;

	for(i=smallest; i<n ; i++) {
		bucket[lastIndex+1] = i;
		pick(item, n, bucket, m, toPick-1);
	}
}

void sort(char* pw, int n){
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
