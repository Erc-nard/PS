#include <stdio.h>

int main()
{
	int i = 0, N=1, p=1;
	scanf("%d", &N);

	while (i++ < N)
	{
		printf("%d \n", p);
		p++;
	}

	return 0;
}