#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
    int a, b;
    int c, d;
    int T;
    int fun = 0;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d %d", &a, &b);
        if (a != 0 && i != 0) {
            if (a == c) fun++;
        }
        if (b != 0 && i != 0) {
            if (b == d) fun++;
        }
        if (a != 0 && b != 0) {
            if (a == b)
                fun++;
        }
        c = a;
        d = b;
    }
    printf("%d", fun);
    return 0;
}