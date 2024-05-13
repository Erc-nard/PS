#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void pick(char* pw, int pwSize, int* bucket, int bucketSize, int toPick) {

    if (toPick == 0) {
        for (int i = 0; i < bucketSize; i++)
            printf("%c", pw[bucket[i]]);
        printf("\n"); 
    }
    int smallest;
    int  lastIndex = bucketSize - toPick - 1;

    if (bucketSize == toPick)
        smallest = 0;
    else
        smallest = bucket[lastIndex] + 1;

    for (int i = smallest; i < pwSize; i++) {
        bucket[lastIndex + 1] = i;
        pick(pw, pwSize, bucket, bucketSize, toPick - 1);
    }
}

int main() {
    int L, C;
    char pw[15];
    int bucket[15];
    scanf("%d %d", &L, &C);

    for (int i = 0; i < C; i++) 
        scanf("%s", &pw[i]);

    //중간에 정렬하는거 넣기

    pick(pw, C, bucket, L, L);
    
}
