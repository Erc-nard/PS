#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int gcd(int x, int y);
int main(void)
{
	int a, b, big, small;
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		big = b;
		small = a;
	}
	else
	{
		big = a;
		small = b;
	}
	printf("%d\n",gcd(big, small));
	printf("%d", (a * b) / (gcd(big, small)));
}
int gcd(int x, int y)
{
	if (y == 0)
		return x;
	else
		return gcd(y, x % y);
	// 힌트: 큰수 x와 작은수 y를 매개변수로 받아서
		// y가 0이면(탈출조건) x를 반환하고,
		// 0이 아니면 작은수 y와(큰수 % 작은수)를 매개변수로 자기 자신 함수를 재귀호출한다.
}