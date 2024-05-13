#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void merge(int* A, int p, int q, int r) {
	int i = p, j = q+1, now = p;
	int* bucket = (int*)malloc(sizeof(int) * (r-p+1));

	while (i <= q && j <= r) {
		if (A[i] > A[j])
			bucket[now++] = A[j++];
		else bucket[now++] = A[i++];
	}
	
	if (i > p) {
		for (int l = j; l <= r; l++)
			bucket[now++] = A[l];
	}
	// 남아 있는 값들을 일괄 복사
	else {
		for (int l = i; l <= p; l++)
			bucket[now++] = A[l];
	}

	for (int k = p; k <= r; k++) {
		A[k] = bucket[k];
	}
	free(bucket);
}
void mergeSort(int* A, int p, int r) {

	if (p < r) {
		int q = (p + r) / 2;
		mergeSort(A, p, q);
		mergeSort(A, q + 1, r);
		merge(A, p, q, r);
	}
}

int main(){
	int n;
	
	scanf("%d", &n);

	int* a = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	mergeSort(a, 0, n-1);
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
	int sum = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			sum += a[j];
			printf("%d ", a[j]);
		}
	}

	printf("%d", sum);
	free(a);

}
