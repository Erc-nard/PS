#include <stdio.h>

int main()
{
	int N,i=1;
	scanf("%d", &N);
	for (; N > 0; N--)
	{
		i*=N;
	};
	printf("%d", i);
}