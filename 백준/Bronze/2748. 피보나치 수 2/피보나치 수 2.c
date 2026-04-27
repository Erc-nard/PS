#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

long long fib(long long n, long long* F) {
    if (n == 1 || n == 2) return 1;
    if (F[n - 1] == 0)
        F[n - 1] = fib(n - 1, F);
    if (F[n - 2] == 0)
        F[n - 2] = fib(n - 2, F);
    return (F[n - 1] + F[n - 2]);
}

int main() {
    int n;
    scanf("%d", &n);

    long long* F = (long long*)malloc(sizeof(long long) * (n + 1));
    for (int i = 0; i <= n; i++)
        F[i] = 0;
    if (n == 0) printf("0");
    else
        printf("%lld", fib(n, F));
}